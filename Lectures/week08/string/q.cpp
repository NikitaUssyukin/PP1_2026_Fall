/*
CURIOSITY / ADVANCED NOTE:
sort and reverse from <algorithm> also work on a string.
They need s.begin() and s.end() to know where the text starts and ends.

Sorting the letters of a word is not required in this course, but it is a
one-line trick that you will meet again in Week 10 (STL).
Inspect this on your own to satisfy your curiosity!
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "KAZAKHSTAN";

    sort(s.begin(), s.end());        // letters in ASCII order
    cout << s << endl;

    reverse(s.begin(), s.end());     // the same letters, backwards
    cout << s << endl;

    return 0;
}
