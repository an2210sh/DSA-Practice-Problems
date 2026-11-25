# Maze Paint Spill

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The maze floor is represented as a grid of rows and columns, where each tile has an integer color code.

When Pac-Man sets off a Paint Bomb at row sr and column sc (0-indexed), the paint spreads outward to all tiles connected to (sr, sc) in the four cardinal directions (up, down, left, and right) that share the same original color as (sr, sc).

Every tile in that connected region is updated to newColor, while all other tiles remain unchanged.

Given the grid, starting coordinates (sr, sc), and newColor, output the updated grid.

 **Input Format** 

First line: Two space-separated integers and — the number of rows and columns in the grid.

Next lines: Each line contains space-separated integers representing the colors in that row.

Last line: Three space-separated integers sr, sc, and newColor — the 0-indexed starting row, 0-indexed starting column, and the replacement color.

 **Constraints** 

 **Output Format** 

Print lines, each containing space-separated integers representing the grid after the paint spill completes.

 **Sample Input 0** 

```
3 3
1 1 1
1 1 0
1 0 1
1 1 2

```

 **Sample Output 0** 

```
2 2 2
2 2 0
2 0 1

```

 **Sample Input 1** 

```
3 3
1 1 1
1 1 0
1 0 1
0 0 1

```

 **Sample Output 1** 

```
1 1 1
1 1 0
1 0 1

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T12:04:03.093Z  

```cpp
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

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/maze-paint-spill/problem)