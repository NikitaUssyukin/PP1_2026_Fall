/*
STL
Set: erasing an element, by value and by iterator
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
        s.insert(x);
    }

    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    int target;
    cin >> target;

    // way 1: erase by value. erase() returns 1 if the value was there, 0 otherwise.
    if(s.erase(target) > 0) {
        cout << "target " << target << " was found and erased\n";
    }
    else {
        cout << "target " << target << " was not found\n";
    }

    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    int target2;
    cin >> target2;

    // way 2: find first, then decide. find() returns s.end() when the value is missing.
    set<int>::iterator it = s.find(target2);
    if(it != s.end()) {
        // *it is the value we found; we can look at it before deleting
        cout << "found " << *it << ", erasing it\n";
        s.erase(it); // erase by iterator
    }
    else {
        cout << "target " << target2 << " was not found\n";
    }

    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
