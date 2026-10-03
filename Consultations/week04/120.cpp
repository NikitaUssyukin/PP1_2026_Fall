#include <iostream>

using namespace std;

int main() {

    char c;
    int k;
    cin >> c >> k;

    k %= 26; // same as k = k % 26
    
    char result;

    if(c + k > 122) result = c + k - 26;
    else result = c + k;

    cout << result << endl;

    return 0;
}