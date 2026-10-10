/*
Alternative perspective: Traversal using a single (non-nested) loop
Taking user input via nested loop, then outputting via flat loop

NOTE:
- Master nested loops (c_1.cpp) first!
- This example reinforces index transformation from 1D flat index to (r, c):
  r = i / m
  c = i % m
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    int a[n][m];

    // Standard input using nested loops
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cin >> a[i][j];
        }
    }

    // Flat traversal from 0 to n * m - 1
    for(int i = 0; i < n * m; ++i) {
        int r = i / m; // row index
        int c = i % m; // column index
        cout << a[r][c] << " "; 
        if(c == m - 1) cout << "\n"; // newline after each row
    }

    return 0;
}
