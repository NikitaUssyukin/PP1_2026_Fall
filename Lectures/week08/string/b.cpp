/*
size() and length()

Both methods return the number of characters in the string.
The value is exactly the same; the difference is only in the name:
length() reads more naturally for text, size() matches other containers.
Pick one and use it consistently.

A technical detail for the curious:
size() returns an UNSIGNED type (size_t), not int. Two visible effects:
1) A result that "should" be negative wraps around to a huge number.
   For "hi" the size is 2, so s.size() - 3 is not -1 but 18446744073709551615.
2) Comparing an int loop counter with s.size() mixes signed and unsigned.
   It works correctly for any normal string, but a compiler with
   -Wall -Wextra may print a warning about that comparison.
   If the warning bothers you, cast the size explicitly: (int)s.size().
*/

#include <iostream>

using namespace std;

int main() {

    string s = "hello";

    cout << s.size() << endl;    // 5
    cout << s.length() << endl;  // 5 - the same value, another name

    string empty = "";
    cout << empty.size() << endl; // 0 - a valid string, just without characters

    string short_s = "hi";
    cout << (short_s.size() - 3) << endl; // huge number: unsigned wrap-around

    return 0;
}
