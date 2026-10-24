/*
Strings

A string is a sequence of characters: "hello", "KBTU", "42 apples".
Under the hood it is a row of characters, just like an array of char.

In C++ there are two kinds of strings:
- C-style strings: arrays of char that end with the hidden symbol '\0'
- std::string: the modern, safe class we use in this course

std::string is dynamic: it grows and shrinks by itself,
so we never have to decide the size of the text in advance.

Ways to create a string:
    string s;                // empty string ""
    string s = "hello";      // from a string literal
    string s("hello");       // constructor form: same result
    string s(5, '*');        // five copies of the character '*'
*/

#include <iostream>

using namespace std;

int main() {

    string empty;             // default string: no characters at all
    string city = "Almaty";   // initialized from a string literal
    string capital("Astana"); // constructor form: same thing, different syntax
    string stars(5, '*');     // repeat constructor: string str(count, ch)

    cout << empty << endl;    // prints nothing, then moves to a new line
    cout << city << endl;
    cout << capital << endl;
    cout << stars << endl;

    return 0;
}
