#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int h, w;

    cin >> h >> w;
    
    vector<vector<long long>> a(h, vector<long long>(w));
    vector<long long> rowSum(h, 0), colSum(w, 0);
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];

            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << rowSum[i] + colSum[j] - a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}