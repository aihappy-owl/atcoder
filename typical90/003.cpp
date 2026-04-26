#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void Dfs(int pre, int now, int len, vector<vector<int>> &numVec, vector<vector<int>> &memo) {
    for (int i = 0; i < numVec[now].size(); i++) {
        if (numVec[now][i] != pre) {
            Dfs(now, numVec[now][i], len + 1, numVec, memo);
        } else {
            memo.push_back({});
            memo.back().push_back(len);
            memo.back().push_back(now);
        }
    }
    
    return;
}

int main() {
    int n, a, b;
    cin >> n;

    vector<vector<int>> numVec(n + 1), memo1, memo2;

    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;

        numVec[a].push_back(b);
        numVec[b].push_back(a);
    }

    Dfs(0, 1, 0, numVec, memo1);

    int current = memo1[0][0];
    int ans = memo1[0][1];

    for (int i = 1; i < memo1.size(); i++) {
        if (memo1[i][0] > current) {
            current = memo1[i][0];
            ans = memo1[i][1];
        }
    }

    Dfs(0, ans, 0, numVec, memo2);
    
    current = memo2[0][0];
    ans = memo2[0][1];

    for (int i = 1; i < memo2.size(); i++) {
        if (memo2[i][0] > current) {
            current = memo2[i][0];
        }
    }

    cout << current + 1 << "\n";

    return 0;
}
