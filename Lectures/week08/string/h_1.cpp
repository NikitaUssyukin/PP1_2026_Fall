/*
Changing characters: a copy or the original?

for(char c : s) gives you a COPY of each character.
Assigning to c changes only that copy, not the string.

Watch the two outputs: the loop prints the changed copies,
and then the string itself still has its original letters.
*/

#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    for(char c : s) {          // c is a copy
        if(c == 'c') c = 'r';  // the copy changes ...
        cout << c;             // ... and we print the copy
    }
    cout << endl;              // rat

    cout << s << endl;         // cat - the string did not change

    return 0;
}
