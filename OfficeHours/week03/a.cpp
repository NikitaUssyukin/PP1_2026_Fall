#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    while(n > 0) {
        cout << (n & 1) << endl; // for any given n, n & 1 operation always finds the last bit of n
        n >>= 1; // same as n = n >> 1
    }

    return 0;
}