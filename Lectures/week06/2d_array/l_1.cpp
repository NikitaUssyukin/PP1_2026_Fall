/*
Sorting and reversing rows in a 2D array using <algorithm>

In C++, a 2D array is an array of 1D arrays:
- a[i] represents row i (a 1D array of size m).
- To sort row i in ascending order: sort(a[i], a[i] + m);
- To reverse row i: reverse(a[i], a[i] + m);
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

    // Sort each row in ascending order
    for(int i = 0; i < n; ++i) {
        sort(a[i], a[i] + m);
    }

    // Reverse each row (uncomment to reverse rows into descending order)
    // for(int i = 0; i < n; ++i) {
    //     reverse(a[i], a[i] + m);
    // }

    // output
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
