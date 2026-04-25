#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int Dfs(int now, int pre, vector<vector<int>> &numVec) {
    for (int i = 0; i < numVec[now].size(); i++) {
        
    }
    
    return 0;
}

int main() {
    int n, a, b, id;
    cin >> n;

    vector<vector<int>> numVec(n + 1);
    vector<int> memo(n + 1, -1);

    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;

        numVec[a].push_back(b);
        numVec[b].push_back(a);
    }

    return 0;
}
