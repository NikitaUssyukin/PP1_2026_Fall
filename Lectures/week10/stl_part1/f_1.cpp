/*
STL
Set: unique elements, kept sorted
*/

#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x); // duplicates are ignored
    }

    cout << s.size() << endl;

    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
