#include <iostream>

using namespace std;

int main() {
    char a; 
    int b;
    cin >> a >> b;
    int c = (a + b % 26 - 97) % 26; // 122 + 25 = 147
                                    // 147 - 97 = 50 
                                    // 50 % 26 = 24
                                    // we need [0; 25] to add to 97
                                    // in order to get [97; 122] as a res
    // b % 26 - remove excess shifts
    // - 97   - remove ascii "padding" before lowercase letters
    // such that we consider a as 0 instead of 97
    // (a + b % 26 - 97) - resulting sum modifier
    // % 26 - remove excess from the modifier, as it should be [0; 25]
    
    cout << char(97 + c); // 97 + modifier, we get smth within [97; 122]
    return 0;
}




