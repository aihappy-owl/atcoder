#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void sort_parens(string S, int left, int right, int &N) {
    if (left + right == N - 1) {
        cout << S + ")" << "\n";
        return;
    }

    if (left < N / 2) {
        sort_parens(S + "(", left + 1, right, N);
    }

    if (left > right) {
        sort_parens(S + ")", left, right + 1, N);
    }
}

int main() {
    int N;

    cin >> N;

    if (N % 2 != 0) {
        return 0;
    }

    sort_parens("", 0, 0, N);

    return 0;
}