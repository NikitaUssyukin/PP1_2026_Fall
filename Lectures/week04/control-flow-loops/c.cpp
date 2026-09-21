#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    // instead of this:
    /*
    if (n >= 1) cout << 1 << endl;
    if (n >= 2) cout << 2 << endl;
    if (n >= 3) cout << 3 << endl;
    if (n >= 4) cout << 4 << endl;
    if (n >= 5) cout << 5 << endl;
    */

    // we can use a loop:
    int num = 1;
    while(num <= n) {
        cout << num << endl;
        ++num; // same as num += 1 or num = num + 1
    }

    return 0;
}