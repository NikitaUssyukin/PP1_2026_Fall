/*
STL
Vector: sorting a subrange [l, r]
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
    cin >> l >> r; // 0 <= l <= r < n

    // end() of the range is one past r, so we pass begin() + r + 1
    sort(v.begin() + l, v.begin() + r + 1);

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
