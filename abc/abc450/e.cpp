#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string X, Y;
    int Q;

    cin >> X >> Y >> Q;

    vector<long long> L(Q), R(Q), S, S_C;
    vector<string> C(Q);

    for (int i = 0; i < Q; i++) {
        cin >> L[i] >> R[i] >> C[i];
    }

    S.push_back(X.size());
    S.push_back(Y.size());

    while (S.back() <= 1000000000000000000LL) {
        S.push_back(S[S.size() - 1] + S[S.size() - 2]);
    }

    cout << S.back() << "\n";
    
    return 0;
}