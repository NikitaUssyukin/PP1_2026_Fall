#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    string res; // res is initially empty, i.e. ""

    int divider = 1;

    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }

    while(n > 0) {
        int bit = n & 1;
        res = char(bit + '0') + res;
        n >>= 1; // same as n = n >> 1
    }

    cout << res << endl;

    return 0;
}