/*
Counting how many times a character appears

Walk through the string once and increase a counter every time
the character matches the one we are looking for.

Input:
    programming
    m

Output:
    2
*/

#include <iostream>

using namespace std;

int main() {

    string s;
    getline(cin, s);       // the text may contain spaces

    char target;
    cin >> target;         // the character we are looking for

    int count = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == target) {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}
