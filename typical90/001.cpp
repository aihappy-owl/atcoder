#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    ll N, L, K;
    ll ok, ng, curMid, m, countK;

    cin >> N >> L >> K;

    vector<ll> A(N + 2);

    A[0] = 0;

    for (int i = 1; i < N + 1; i++) {
        cin >> A[i];
    }

    A.back() = L;

    ok = 0;
    ng = L - A[1] + 1;

    while (ng - ok > 1) {
        curMid = (ok + ng) / 2;
        m = countK = 0;

        for (int i = 1; i < N + 2; i++) {
            if (A[i] - A[m] >= curMid) {
                m = i;
                countK++;
            }
        }

        if (K < countK) {
            ok = curMid;
        } else {
            ng = curMid;
        }
    }
    
    cout << ok << "\n";

    return 0;
}