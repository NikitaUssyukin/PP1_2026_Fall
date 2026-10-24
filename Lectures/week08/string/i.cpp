/*
CURIOSITY / ADVANCED NOTE:
s.begin() and s.end() return ITERATORS - values that point to the first
character and to the position just after the last one. The * symbol reads
the value that an iterator points to.

Iterators are formally covered in Week 10 (STL), and pointers - which
iterators are built on - in Week 13. You are not required to use them now:
indexing with s[i] and range-based for loops do the same job.
Inspect this on your own to satisfy your curiosity!
*/

#include <iostream>

using namespace std;

int main() {

    string s = "KBTU";

    cout << *s.begin() << endl;         // K - the first character
    cout << *(s.end() - 1) << endl;     // U - the last character
    cout << *(s.begin() + 2) << endl;   // T - the same as s[2]

    return 0;
}
