/*
Sorting a specific subrange across a 2D array (Advanced / Concise approach)

CURIOSITY / ADVANCED NOTE:
This is the pointer-based version of subrange sorting.
It treats the entire 2D array as one flat sequence of n * m elements
and uses pointer arithmetic (*a + offset) to define the sorting interval.
- Start element at (first_i, first_j) has flat offset: first_i * m + first_j
- End element at (last_i, last_j) has flat offset: last_i * m + last_j
Pointers and memory addresses will be formally covered in Week 13.
Inspect on your own to satisfy your curiosity!
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

    int first_i, first_j;
    int last_i, last_j;

    // Read the start coordinates and end coordinates of the range to sort
    cin >> first_i >> first_j >> last_i >> last_j;

    // Sort from (first_i, first_j) up to (last_i, last_j) inclusive
    sort(*a + first_i * m + first_j, *a + last_i * m + last_j + 1);

    // output
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
