/*
Sorting ALL values in a 2D array (Beginner-friendly approach)

Approach:
1. Flatten the 2D array into a temporary 1D array of size n * m.
2. Sort the 1D array using standard sort(temp, temp + total_elements).
3. Put the sorted values back into the 2D array row by row.

This achieves a full sort of the entire matrix without needing advanced
pointer syntax (*a), using only concepts learned in Weeks 1-6.
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

    // Step 1: Copy all 2D elements into a temporary 1D array
    int temp[n * m];
    int index = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            temp[index] = a[i][j];
            ++index;
        }
    }

    // Step 2: Sort the 1D array
    sort(temp, temp + n * m);

    // Step 3: Copy sorted elements back into the 2D array
    index = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            a[i][j] = temp[index];
            ++index;
        }
    }

    // output
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
