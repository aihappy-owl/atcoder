#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int c, p, n, q, l, r;
    cin >> n;

    vector<int> sum1(n + 1, 0), sum2(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> c >> p;
        if (c == 1) {
            sum1[i] = sum1[i - 1] + p;
            sum2[i] = sum2[i - 1];
        } else if (c == 2) {
            sum2[i] = sum2[i - 1] + p;
            sum1[i] = sum1[i - 1];
        }
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> l >> r;

        cout << sum1[r] - sum1[l - 1] << " " << sum2[r] - sum2[l - 1] << "\n";
    }
    
    return 0;
}