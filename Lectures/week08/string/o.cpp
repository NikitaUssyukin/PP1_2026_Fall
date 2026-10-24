/*
Editing a string in place

s.append(text)      - add text at the end (the same effect as +=)
s.insert(pos, text) - insert text starting at position pos,
                      shifting everything to the right
s.erase(pos, len)   - remove len characters starting at position pos
*/

#include <iostream>

using namespace std;

int main() {

    string s = "Hello World";

    s.erase(5, 6);          // remove " World"
    cout << s << endl;      // Hello

    s.insert(5, ", C++");   // insert after "Hello"
    cout << s << endl;      // Hello, C++

    s.append("!");          // add at the end
    cout << s << endl;      // Hello, C++!

    return 0;
}
