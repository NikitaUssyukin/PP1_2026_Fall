/*
Reading one word

cin >> s reads characters until the first space or newline,
so it can never read a sentence.

Input:  good morning
Output: good     - the rest of the line stays in the input buffer
*/

#include <iostream>

using namespace std;

int main() {

    string s;

    cin >> s;

    cout << s << endl;

    return 0;
}
