/*
Taking a piece of a string

s.substr(pos, len) - len characters starting at position pos
s.substr(pos)      - from position pos to the end of the string

The second argument is a LENGTH, not an end position:
substr(7, 5) takes five characters, not "from 7 to 5".
*/

#include <iostream>

using namespace std;

int main() {

    string s = "Hello, World";

    string w = s.substr(7, 5);
    cout << w << endl;          // World

    cout << s.substr(0, 5) << endl;   // Hello - the first five characters
    cout << s.substr(7) << endl;      // World - to the very end

    // If len reaches past the end, substr simply stops at the last character.
    cout << s.substr(7, 100) << endl; // World, not an error

    return 0;
}
