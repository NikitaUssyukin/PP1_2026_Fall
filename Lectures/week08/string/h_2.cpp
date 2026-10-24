/*
Changing characters: a reference to the original

for(char &c : s) gives you a REFERENCE to each character.
The & means "c is just another name for the character in the string",
so assigning to c rewrites the string itself.
*/

#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    for(char &c : s) {         // c refers to the character, not to a copy
        if(c == 'c') c = 'r';  // this assignment really changes s
    }

    cout << s << endl;         // rat

    return 0;
}
