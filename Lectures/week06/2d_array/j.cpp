/*
Checking if a square n by n 2D array is symmetric
over the main diagonal
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    char a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < n; ++j) { // inner loop: columns
            cin >> a[i][j];
        }
    }

    // Check symmetry: only need to check elements above the main diagonal (j > i)
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(a[i][j] != a[j][i]) {
                cout << "Not symmetric\n";
                return 0; // stop execution immediately upon first mismatch
            }
        }
    }

    cout << "Symmetric\n";

    return 0;
}
