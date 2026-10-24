/*
Searching inside a string

s.find(word) returns the position where word starts,
or the special value string::npos when the word is not there at all.

npos means "no position". Always compare the result with string::npos,
never with -1.

find returns size_t (an unsigned integer type), so we store the result
in a size_t variable.
*/

#include <iostream>

using namespace std;

int main() {

    string s = "Hello, World";

    size_t p = s.find("World");       // 7 - the word starts at position 7
    cout << p << endl;

    // A common trap: if(s.find(x)) is false when the word is found at position 0,
    // because 0 is treated as false. Always compare with string::npos instead.
    if(p != string::npos) {
        cout << "found at " << p << endl;
    } else {
        cout << "not found" << endl;
    }

    if(s.find("bye") == string::npos) {
        cout << "there is no \"bye\" in the text" << endl;
    }

    return 0;
}
