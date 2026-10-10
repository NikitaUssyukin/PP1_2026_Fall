/*
Sorting a specific range within a row of a 2D array using <algorithm>

In C++, row r is a 1D array accessible as a[r].
To sort elements in row r from column start_col to end_col (inclusive):
sort(a[r] + start_col, a[r] + end_col + 1);
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

    int target_row;
    int start_col;
    int end_col;

    // Read which row to sort and the column range [start_col; end_col]
    cin >> target_row >> start_col >> end_col;

    // Sort only the specified range within target_row
    sort(a[target_row] + start_col, a[target_row] + end_col + 1);

    // output
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < m; ++j) { // inner loop: columns
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
