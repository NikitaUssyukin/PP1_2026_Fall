/*
STL
Vector: sorting all elements
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

    sort(v.begin(), v.end()); // ascending order

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
