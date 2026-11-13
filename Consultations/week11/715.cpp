#include <iostream>

using namespace std;

// Phase 2. Declaring a function
bool valid_string(string s, int n) {
    bool result = false;

    // Phase 3. Counting the digits in a string
    int counter = 0;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] >= '0' && s[i] <= '9') {
            counter++;
        }
    }

    return result;
}

int main() {

    // Phase 1. Declaration of variables and input

    string s;
    cin >> s;

    int n;
    cin >> n;

    // Phase 4. Checking the result and deciding what to output 
    if(valid_string(s, n)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}