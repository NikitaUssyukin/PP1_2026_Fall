/*
stringstream: a stream over a string

<sstream> gives you stringstream - a stream you can read from and write to,
exactly like cin and cout, but all of it lives inside a string.

Classic use: one line contains values of different types, and we want to
pull them out one by one with >>, without worrying about spaces.
*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss("12 7 apple");   // the whole line is inside the stream

    int a, b;
    string word;

    ss >> a >> b >> word;            // read values in the order we expect them

    cout << a << endl;               // 12
    cout << b << endl;               // 7
    cout << word << endl;            // apple

    cout << a + b << endl;           // 19 - a and b are real numbers

    return 0;
}
