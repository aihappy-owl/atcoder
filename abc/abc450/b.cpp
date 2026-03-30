#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> C(101, vector<int>(101));

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            cin >> C[i][j];
        }
    }

    for(int a = 1; a <= n; a++){
        for(int b = a + 1; b <= n; b++){
            for(int c = b + 1; c <= n; c++){
                if(C[a][c] > C[a][b] + C[b][c]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
}
