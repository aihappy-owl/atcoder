#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, q, l, r, sum1, sum2;
    cin >> n;

    vector<int> c(n, 0), p(n, 0 );

    for (int i = 0; i < n; i++) {
        cin >> c[i] >> p[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        sum1 = sum2 = 0;

        cin >> l >> r;

        for (int i = l - 1; i < r; i++) {
            if (c[i] == 1) {
                sum1 += p[i];
            } else if (c[i] == 2) {
                sum2 += p[i];
            }
        }

        cout << sum1 << " " << sum2 << "\n";
    }
    
    return 0;
}