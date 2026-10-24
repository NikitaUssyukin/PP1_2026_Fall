/*
Changing the case of a string

<cctype> provides two ready-made functions:
    toupper(c) - lower case letter -> upper case
    tolower(c) - upper case letter -> lower case

They take one character and return its code as an int, so store the
result in a char and put it back into the string.

The same thing can be done by hand with the ASCII arithmetic from the
previous sample:  c - 'a' + 'A'  for lower -> upper, and  c - 'A' + 'a'
for upper -> lower.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main() {

    string s = "Kbtu Programming";

    for(int i = 0; i < s.size(); ++i) {
        s[i] = toupper(s[i]);      // store the upper case letter back
    }
    cout << s << endl;             // KBTU PROGRAMMING

    for(char &c : s) {
        c = tolower(c);            // the reference changes the string itself
    }
    cout << s << endl;             // kbtu programming

    // The same result by hand, without <cctype>:
    string t = "abc";
    for(int i = 0; i < t.size(); ++i) {
        t[i] = t[i] - 'a' + 'A';
    }
    cout << t << endl;             // ABC

    return 0;
}
