#include <iostream>
#include <queue>

using namespace std;

const int N = 8;
// dx and dy arrays store the changes in x and y coordinate
// for the 8 possible moves of a knight
int dx[8] = {-2, -2, 2, 2, -1, -1, 1, 1};
int dy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};

// isValid function checks if a given coordinate lies within the chessboard
bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

// lee function returns the minimum number of knight moves to reach the end coordinate
int lee(int sx, int sy, int ex, int ey) {
// queue stores the coordinates to be visited
    queue<pair<int, int>> q;
// pushing the starting coordinate
    q.push({sx, sy});



// dist stores the distance from starting coordinate
// initializing all values as -1 (not visited)
    int dist[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dist[i][j] = -1;
        }
    }
// setting the starting coordinate's distance as 0
    dist[sx][sy] = 0;

    while (!q.empty()) {
        // t stores the current coordinate
        auto t = q.front();
        q.pop();

        int x = t.first;
        int y = t.second;

        // if we have reached the end coordinate, return the distance
        if (x == ex && y == ey) {
            return dist[x][y];
        }

        // visiting 8 possible moves
        for (int i = 0; i < 8; i++) {
            int a = x + dx[i];
            int b = y + dy[i];
            if (isValid(a, b) && dist[a][b] == -1) {
                // if the move is valid and not visited, update the distance
                dist[a][b] = dist[x][y] + 1;
                // push the move to the queue
                q.push({a, b});
            }
        }
    }
// return -1 if end coordinate is not reached
    return -1;
}

int main() {
    int sx, sy, ex, ey;
    char s[3], e[3];
// input multiple test cases
    while (cin >> s >> e) {
// converting the input string to coordinate values
        sx = s[0] - 'a';
        sy = s[1] - '1';
        ex = e[0] - 'a';
        ey = e[1] - '1';
// printing the answer
        cout << "To get from " << s << " to " << e << " takes " << lee(sx, sy, ex, ey) << " knight moves." << endl;
    }
    return 0;
}