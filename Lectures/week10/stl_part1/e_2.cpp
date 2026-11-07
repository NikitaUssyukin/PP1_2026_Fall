/*
STL
Vector: sorting part of the vector
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for(int &x : v) {
        cin >> x;
    }

    int l, r;
    cin >> l >> r; // l and r are valid positions, and l <= r

    // the end of the range is one past r, so we pass begin() + r + 1
    sort(v.begin() + l, v.begin() + r + 1);

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
