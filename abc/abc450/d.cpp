#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, K, ans;
    cin >> N >> K;

    vector<int> A(N+1);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i] %= K;
    }
    
    sort(A.begin(), A.begin() + N);

    A[N] = A[0] + K;

    ans = A[1] - A[0];

    for (int i = 1; i < N; i++) {
        if (ans <= A[i+1] - A[i]) {
            ans = A[i+1] - A[i];
        }
        
    }

    ans = K - ans;

    cout << ans << "\n";

    return 0;
}