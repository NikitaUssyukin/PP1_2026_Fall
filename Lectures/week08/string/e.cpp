/*
Concatenation

+  builds a NEW string out of two strings
+= appends to an EXISTING string, without creating a new one

At least one side of + must be a string. Two raw literals cannot be
added: "a" + "b" does not compile, because there is no + for two arrays
of characters. Write string("a") + "b", or build the text with +=.
*/

#include <iostream>

using namespace std;

int main() {

    string first = "Nur";
    string last = "Bek";

    string full = first + " " + last;   // "Nur Bek"
    cout << full << endl;

    full += "!";                        // append a string literal
    cout << full << endl;

    full += '?';                        // append a single character
    cout << full << endl;

    string greeting = "Hello";
    greeting += ", ";
    greeting += "world";
    cout << greeting << endl;

    return 0;
}
