#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void dfs(int i, int j, vector<vector<char>> &S) {
    S[i][j]
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H, vector<char>(W));

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++){
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                dfs(0, 0, S);
            }
        }
    }

    return 0;
}