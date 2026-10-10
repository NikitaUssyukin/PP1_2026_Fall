/*
I/O redirection from and to .txt files with freopen

EJUDGE SAFETY RULE:
- freopen is useful for local testing so you do not have to retype matrices.
- IMPORTANT: Always COMMENT OUT freopen lines before submitting code to Ejudge!
- On Ejudge, active freopen will cause a Runtime Error or Wrong Answer.
*/

#include <iostream>

using namespace std;

int main() {

    // Uncomment these two lines for local testing with input.txt and output.txt:
    // freopen("input.txt", "r", stdin);   // redirect standard input from file
    // freopen("output.txt", "w", stdout); // redirect standard output to file

    int n;

    cin >> n;

    char a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop: rows
        for(int j = 0; j < n; ++j) { // inner loop: columns
            cin >> a[i][j];
        }
    }

    // Check symmetry across the main diagonal:
    // Compare each element a[i][j] with its transpose a[j][i] for j > i (strictly upper triangle)
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
