/*
STL
Set: converting to a vector for index access
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {

    set<int> s;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    vector<int> v(s.begin(), s.end()); // copies the sorted set

    int idx;
    cin >> idx;

    cout << v.at(idx) << endl; // at() checks the index

    return 0;
}
