/*
Reading a whole line

getline(cin, s) reads everything up to the end of the line,
spaces included. This is the way to read a sentence.

Input:  good morning
Output: good morning
*/

#include <iostream>

using namespace std;

int main() {

    string s;

    getline(cin, s);

    cout << s << endl;

    return 0;
}
