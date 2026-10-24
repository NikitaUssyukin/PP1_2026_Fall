/*
Numbers written as text

"12" and 12 are different things:
- "12" is a string of two characters
- 12 is a number we can add, multiply and compare

stoi(s)      - string -> int:    "12" becomes 12
to_string(n) - int -> string:    12 becomes "12"

If you add two strings, you get concatenation. If you add two numbers,
you get a sum. Compare the two lines below.
*/

#include <iostream>

using namespace std;

int main() {

    string s1 = "12";
    string s2 = "30";

    cout << s1 + s2 << endl;            // 1230 - the two texts are glued together

    int a = stoi(s1);                   // now we have real numbers
    int b = stoi(s2);

    cout << a + b << endl;              // 42 - real arithmetic

    cout << a + b << " as text: " + to_string(a + b) << endl; // 42 as text: 42

    // stoi reads the number at the beginning of the text and ignores the rest,
    // so use it on text that really contains a number.
    cout << stoi("12abc") << endl;      // 12

    return 0;
}
