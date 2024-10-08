#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector< pair<int, int> > remove_inner(vector< pair<int, int> > V) {
    vector< pair<int, int> > answer;
    for (auto &p : V) {
        while (!answer.empty() && answer.back().first >= p.first && answer.back().second <= p.second)
            answer.pop_back();
        answer.push_back(p);
    }
    return answer;
}

template<class T>
const T& pick(T& first, T& second, bool condition) {
    if (condition)
        return first;
    else
        return second;
}

int intersect(int x1, int y1, int x2, int y2) {
    int x = max(x1, x2);
    int y = min(y1, y2);
    if (x <= y)
        return y - x;
    return 0;
}

struct Query {
    int index, from, to;
};

template<class Iterator>
void divide_et_impera(const vector< pair<int, int> >&V, int begin, int end, Iterator query_begin, Iterator query_end, vector<int>& buffer, vector<int>& answer) {
    if (end - begin == 1) { // we done
        for (auto it = query_begin; it != query_end; ++it)
            answer[it->index] = max(answer[it->index], V[begin].second - V[begin].first);
        return;
    }

    int mid = (begin + end) / 2;

    auto to_answer = partition(query_begin, query_end, [&](const Query& query) {
        return query.to < mid || query.from >= mid;
    });

    // precalculate
    for (int i = mid - 1; i >= begin; --i) {
        buffer[i] = V[i].second - V[i].first;
        if (i + 1 < mid)
            buffer[i] = max(buffer[i], buffer[i + 1]);
    }

    for (int i = mid; i < end; ++i) {
        buffer[i] = V[i].second - V[i].first;
        if (i > mid)
            buffer[i] = max(buffer[i], buffer[i - 1]);
    }

    for (auto it = to_answer; it != query_end; ++it)
        answer[it->index] = max(answer[it->index], max(buffer[it->from], buffer[it->to]));

    // partition again
    auto query_mid = partition(query_begin, to_answer, [&](const Query& query) {
        return query.to < mid;
    });

    divide_et_impera(V, begin, mid, query_begin, query_mid, buffer, answer);
    divide_et_impera(V, mid, end, query_mid, to_answer, buffer, answer);
}

int main() {
    ifstream cin("proiectoare.in");
    ofstream cout("proiectoare.out");

    int N, Q, K; assert(cin >> N >> Q >> K);
    assert(1 <= N && N <= 100000);
    assert(1 <= Q && Q <= 100000);
    assert(1 <= K && K <= N);

    vector< pair<int, int> > V(N);
    for (int i = 0; i < N; ++i) {
        assert(cin >> V[i].first >> V[i].second);
        assert(0 <= V[i].first && V[i].first <= V[i].second && V[i].second <= 1000 * 1000 * 1000);
    }

    sort(V.begin(), V.end(), [&](pair<int, int> a, pair<int, int> b) {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first > b.first;
    });

    V = remove_inner(V);

    vector<int> step1(V.size());
    int index = 0;
    for (int i = 0; i < int(V.size()); ++i) {
        while (index < int(V.size()) && V[index].first <= V[i].second)
            ++index;
        step1[i] = index;
    }

    auto current = step1;
    // recompute the intervals using K at a time
    int oldK = K--;
    vector<bool> to_double;
    while (K > 1) {
        if (K % 2) {
            to_double.push_back(false);
            K--;
        } else {
            to_double.push_back(true);
            K /= 2;
        }
    }

    reverse(to_double.begin(), to_double.end());
    for (auto op : to_double) {
        auto& extend = pick(current, step1, op);

        vector<int> next;

        for (int i = 0; i < int(V.size()); ++i)
            next.emplace_back(extend[current[i] - 1]);
        current = next;
    }

    if (oldK > 1) {
        vector< pair<int, int> > newV;
        for (int i = 0; i < int(V.size()); ++i)
            newV.emplace_back(V[i].first, V[current[i] - 1].second);

        V = newV;
    }

    // now we good, we can finally solve problem
    vector<int> answer(Q, 0);
    vector<Query> need;
    for (int i = 0; i < Q; ++i) {
        int x, y; assert(cin >> x >> y);
        assert(0 <= x && x <= y && y <= 1000 * 1000 * 1000);

        // find best prefix, best suffix
        int prefix = lower_bound(V.begin(), V.end(), x, [&](pair<int, int> p, int x) {
            return p.first <= x;
        }) - V.begin();
        --prefix;

        int suffix = lower_bound(V.begin(), V.end(), y, [&](pair<int, int> p, int y) {
            return p.second < y;
        }) - V.begin();

        if (prefix >= 0)
            answer[i] = max(answer[i], intersect(V[prefix].first, V[prefix].second, x, y));
        if (suffix < int(V.size()))
            answer[i] = max(answer[i], intersect(V[suffix].first, V[suffix].second, x, y));
        if (prefix + 1 < suffix)
            need.emplace_back(Query{i, prefix + 1, suffix - 1});
    }

    vector<int> buffer(V.size(), 0);
    divide_et_impera(V, 0, V.size(), need.begin(), need.end(), buffer, answer);

    for (int i = 0; i < Q; ++i)
        cout << answer[i] << "\n";
} 