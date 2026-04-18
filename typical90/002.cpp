#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;

    cin >> N;

    if (N % 2 != 0) {
        return 0;
    }

    vector<int> S(N);

    for (int i = 0; i < N / 2; i++) {
        S[i] = 1;
        S[i + (N / 2)] = -1;
    }
    
    return 0;
}