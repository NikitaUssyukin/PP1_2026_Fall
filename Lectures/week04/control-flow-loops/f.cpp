#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) continue; // skip evens
        if (i > 7) break;         // stop early
        cout << i << " ";
    }
    cout << endl;

    return 0;
}