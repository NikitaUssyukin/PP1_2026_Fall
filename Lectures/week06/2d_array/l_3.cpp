/*
Sorting ALL values in a 2D array (Advanced / Concise approach)

CURIOSITY / ADVANCED NOTE:
This is a different, much shorter way to do the exact same thing as in l_2.cpp.
It uses pointer decay (*a treats the 2D array as a contiguous 1D memory block).
We will officially study pointers in Week 13 (Lecture 10).
For now, inspect this on your own to satisfy your curiosity!
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    int a[n][m];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cin >> a[i][j];
        }
    }

    // *a points to the first element a[0][0].
    // Because 2D arrays are stored contiguously in memory,
    // *a + n * m points past the very last element a[n - 1][m - 1].
    sort(*a, *a + n * m);

    // Reverse the entire sorted 2D array (uncomment if descending order is needed):
    // reverse(*a, *a + n * m);

    // output
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
