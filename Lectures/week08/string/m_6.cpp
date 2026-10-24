/*
Reading the input from a file with freopen

EJUDGE SAFETY RULE:
- freopen is useful for local testing, so you do not retype a long text every run.
- IMPORTANT: Always COMMENT OUT the freopen lines before submitting code to Ejudge!
- On Ejudge, an active freopen will cause a Runtime Error or Wrong Answer.
*/

#include <iostream>

using namespace std;

int main() {

    // Uncomment these two lines for local testing with input.txt and output.txt:
    // freopen("input.txt", "r", stdin);   // redirect standard input from the file
    // freopen("output.txt", "w", stdout); // redirect standard output to the file

    string text;

    getline(cin, text);

    cout << text << endl;
    cout << text.size() << " characters" << endl;

    return 0;
}
