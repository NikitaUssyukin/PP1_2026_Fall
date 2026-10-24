/*
Accessing individual characters

s[i]        - the character at position i (positions start from 0), no bounds check
s.at(i)     - same character, but checks the position and stops with an error
              message if it is out of range (useful while learning)
s.front()   - the first character
s.back()    - the last character
s[size - 1] - the last character, written with indexing

Valid positions are 0 ... size() - 1. Position size() is already past the end.
front() and back() exist since C++11: compile with -std=c++11 if your
compiler complains about them.
*/

#include <iostream>

using namespace std;

int main() {

    string s = "KBTU";

    cout << s[0] << endl;            // K - first character
    cout << s.at(1) << endl;         // B
    cout << s.front() << endl;       // K
    cout << s.back() << endl;        // U - last character
    cout << s[s.size() - 1] << endl; // U - the same, by index

    return 0;
}
