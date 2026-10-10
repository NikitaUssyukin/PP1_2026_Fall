/*
Outputting all indexes in an n by m 2D array
Helps visualize the (row, column) coordinate grid.
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    // output index coordinates
    for(int i = 0; i < n; ++i) {     // outer loop: row index
        for(int j = 0; j < m; ++j) { // inner loop: column index
            cout << "[" << i << "][" << j << "] ";
        }
        cout << "\n";
    }

    return 0;
}
