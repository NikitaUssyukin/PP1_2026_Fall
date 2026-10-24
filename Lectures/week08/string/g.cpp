/*
Going through every character

Two ways to visit all characters of a string:
1) an index loop - you know the position of every character
2) a range-based for loop - shorter, when you only need the character itself

The range-based for loop needs C++11: compile with -std=c++11
if your compiler asks for it.
*/

#include <iostream>

using namespace std;

int main() {

    string s = "sweet";

    // 1) by index
    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];                   // i is the position: 0, 1, 2, ...
    }
    cout << endl;

    // 2) range-based: ch takes the value of every character in turn
    for(char ch : s) {
        cout << ch;
    }
    cout << endl;

    return 0;
}
