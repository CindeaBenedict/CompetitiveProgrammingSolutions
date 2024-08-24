unordered_map <int, int> m;

long long CountSumS(vector <int> &a, int s){

    long long ans = 0;

    for(auto e : a){

        m[e]++;
        ans += m[s - e] - (s - e == e);

    }

    return ans;
}