#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string X, Y;
    int Q;

    cin >> X >> Y >> Q;

    vector<long long> L(Q), R(Q);
    vector<string> C(Q);

    for (int i = 0; i < Q; i++) {
        cin >> L[i] >> R[i] >> C[i];
    }

    return 0;
}