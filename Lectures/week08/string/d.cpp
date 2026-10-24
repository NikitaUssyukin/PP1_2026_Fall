/*
Comparing strings

== and != compare the CONTENT: two strings are equal when they contain
exactly the same characters in the same order.
<, >, <=, >= compare them lexicographically, like a dictionary:
character by character, using the ASCII code of each character.

Uppercase letters have smaller ASCII codes than lowercase ones,
so "Zoo" is considered "smaller" than "apple".
*/

#include <iostream>

using namespace std;

int main() {

    string a = "Apple";
    string b = "Banana";
    string zoo = "Zoo";
    string lower_apple = "apple";

    cout << (a == b) << endl;            // 0 - different content
    cout << (a != b) << endl;            // 1
    cout << (a < b) << endl;             // 1 - 'a' comes before 'b'
    cout << (b > a) << endl;             // 1 - the same fact, read the other way
    cout << (zoo < lower_apple) << endl; // 1 - 'Z' (90) is less than 'a' (97)

    return 0;
}
