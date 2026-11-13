#include <iostream>

using namespace std;

int main() {
    
    // Phase 1. Declaration of variables and input
    string s;
    getline(cin, s);
    
    string vowels = "AEOUIaeoui";

    // Phase 2. Processing the string char by char and performing output
    for(int i = 0; i < s.length(); ++i) {
        if(vowels.find(s[i]) != string::npos) {
            continue;
        }
        cout << s[i];
    }
    cout << endl;

    return 0;
}