#include <iostream>
#include <vector>

using namespace std;

void dfs(int H, int W, int i, int j, vector<vector<char>> &S) {
    S[i][j] = '#';

    if (j + 1 < W && S[i][j+1] == '.') {
        dfs(H, W, i, j+1, S);
    }

    if (j - 1 >= 0 && S[i][j-1] == '.') {
        dfs(H, W, i, j-1, S);
    }

    if (i + 1 < H && S[i+1][j] == '.') {
        dfs(H, W, i+1, j, S);
    }
    
    if (i - 1 >= 0 && S[i-1][j] == '.') {
        dfs(H, W, i-1, j, S);
    }

    return;
}

int main() {
    int H, W;
    int count = 0;

    cin >> H >> W;
    
    vector<vector<char>> S(H, vector<char>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (i == 0 || i == H - 1 || j == 0 || j == W - 1) {
                if (S[i][j] == '.') {
                    dfs(H, W, i, j, S);
                }
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                dfs(H, W, i, j, S);

                count++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}