#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

string X, Y;
ll Q, X_count, Y_count;

vector<ll> S, S_C;
ll L, R;
char C;

void solve(char C, int k, ll m, vector<ll> &S) {
    if (m == 0) return;
    
    if (k == 0) {
        X_count += count(X.begin(), X.begin() + m, C);
        return;
    }

    if (k == 1) {
        Y_count += count(Y.begin(), Y.begin() + m, C);
        return;
    }

    if (m <= S[k - 1]) {
        solve(C, k - 1, m, S);
        solve(C, k - 2, 0, S);
    }

    if (m > S[k - 1]) {
        X_count += S_C[k - 1];
        solve(C, k - 2, m - S[k - 1], S);
    }

    return;
}

int main() {
    cin >> X >> Y >> Q;

    S.push_back(X.size());
    S.push_back(Y.size());

    for (int i = 0; i < Q; i++) {
        X_count = Y_count = 0;
        S = S_C = {};

        cin >> L >> R >> C;

        S.push_back(X.size());
        S.push_back(Y.size());

        S_C.push_back(count(X.begin(), X.end(), C));
        S_C.push_back(count(Y.begin(), Y.end(), C));

        while (S.back() <= R) {
            S.push_back(S[S.size() - 1] + S[S.size() - 2]);
            S_C.push_back(S_C[S_C.size() - 1] + S_C[S_C.size() - 2]);
        }
        
        solve(C, S.size(), L - 1, S);
        ll L_count = X_count + Y_count;

        X_count = Y_count = 0;

        solve(C, S.size(), R, S);
        ll R_count = X_count + Y_count;

        cout << R_count - L_count << "\n";
    }

    return 0;
}