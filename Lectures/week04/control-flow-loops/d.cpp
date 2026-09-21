#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        cout << i << endl;
    }

    // equivalent thing with the while loop:
    /*
    int i = 1;
    while(i <= n) {
        cout << i << endl;
        ++i;
    }
    */

    return 0;
}