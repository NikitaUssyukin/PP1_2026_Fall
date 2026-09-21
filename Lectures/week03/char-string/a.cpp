#include <iostream>

using namespace std;

int main() {
    
    string s;

    cin >> s;

    // if(s.length() == 0) {
    //     cout << "string is empty" << endl;
    //     return 0;
    // }

    cout << s[0] << endl; // first symbol (char)
    cout << s[s.length() - 1] << endl;

    return 0;
}