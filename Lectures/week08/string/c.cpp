/*
Copying strings

The assignment operator copies the whole string, character by character.
The copy is independent: changing one string never changes the other.
*/

#include <iostream>

using namespace std;

int main() {

    string a = "cat";
    string b = a;        // b is a separate copy of "cat"

    b[0] = 'r';          // indexing is explained in a couple of samples;
                         // here we only need to change one character

    cout << a << endl;   // cat - the original is untouched
    cout << b << endl;   // rat - only the copy changed

    return 0;
}
