/*
Reading a number and then a line

cin >> n reads the number and stops right before the newline,
but the newline itself stays in the input buffer.
The next getline sees that leftover newline and returns an EMPTY line,
so the real text is never read.

cin.ignore() throws away one character (the leftover newline)
and the getline after it reads the text we wanted.

Input:
    3
    hello world
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    cin.ignore();          // discard the leftover '\n'

    string line;
    getline(cin, line);

    cout << n << " | " << line << endl;   // 3 | hello world

    return 0;
}
