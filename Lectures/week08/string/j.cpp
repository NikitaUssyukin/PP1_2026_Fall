/*
A character is a number

Every char is stored as an integer code (its ASCII code).
'A' is 65, 'a' is 97, and the digits '0'...'9' are 48...57 -
ten consecutive codes, in order.

Two directions:
    char -> number : int(ch) gives the code;
                     ch - '0' gives the value of a digit character
    number -> char : n + '0' gives the character of a one-digit number
*/

#include <iostream>

using namespace std;

int main() {

    char letter = 'A';
    char digit_char = '7';

    cout << int(letter) << endl;        // 65 - the ASCII code
    cout << int(digit_char) << endl;    // 55 - the code, NOT the number 7

    int value = digit_char - '0';       // 55 - 48 = 7, the number we usually mean
    cout << value << endl;              // 7

    cout << value + 1 << endl;          // 8 - real arithmetic, because value is an int

    char back = value + '0';            // 7 + 48 = 55 -> '7'
    cout << back << endl;               // 7 - but this time as a character

    // The same trick works for letters: 'a'...'z' and 'A'...'Z' are consecutive.
    char lower = 'd';
    char upper = lower - 'a' + 'A';     // 100 - 97 + 65 = 68 -> 'D'
    cout << upper << endl;              // D

    return 0;
}
