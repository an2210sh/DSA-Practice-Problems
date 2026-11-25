#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    if (!(cin >> r >> c)) return 0;

    vector<vector<int>> grid(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> grid[i][j];
        }
    }

    int sr, sc, newColor;
    if (!(cin >> sr >> sc >> newColor)) return 0;

    if (sr >= 0 && sr < r && sc >= 0 && sc < c) {
        int oldColor = grid[sr][sc];

        if (oldColor != newColor) {
            queue<pair<int, int>> q;
            grid[sr][sc] = newColor;
            q.emplace(sr, sc);

            const int dr[4] = {-1, 1, 0, 0};
            const int dc[4] = {0, 0, -1, 1};

            while (!q.empty()) {
                auto [curr_r, curr_c] = q.front();
                q.pop();

                for (int d = 0; d < 4; ++d) {
                    int nr = curr_r + dr[d];
                    int nc = curr_c + dc[d];

                    if (nr >= 0 && nr < r && nc >= 0 && nc < c && grid[nr][nc] == oldColor) {
                        grid[nr][nc] = newColor;
                        q.emplace(nr, nc);
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << grid[i][j] << (j + 1 == c ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
