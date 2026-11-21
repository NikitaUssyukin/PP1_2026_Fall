// string of digits, calculate sum

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;

    for(int i = 0; i < s.size(); ++i) {
        char digit = s[i];
        int k = digit - '0';
        sum += k;
    }

    cout << sum << endl;
}