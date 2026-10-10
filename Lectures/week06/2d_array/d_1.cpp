/*
Alternative perspective: Traversal using a single (non-nested) loop

NOTE:
- In most cases, you will use standard NESTED loops (shown in c_1.cpp).
- This example demonstrates how 2D arrays are stored contiguously in memory:
  Each element at flat index i maps to:
  - row: r = i / m
  - column: c = i % m
*/

#include <iostream>

using namespace std;

int main() {

    const int n = 3;
    const int m = 3;

    int a[n][m] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    for(int i = 0; i < n * m; ++i) {
        int r = i / m; // row index (integer division)
        int c = i % m; // column index (remainder)
        cout << a[r][c] << " "; 
        if(c == m - 1) cout << "\n"; // newline at the end of each row
    }

    return 0;
}
