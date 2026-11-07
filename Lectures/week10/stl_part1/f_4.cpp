/*
STL
Set: smallest and largest element
*/

#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s;

    int n;
    cin >> n; // n is at least 1

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    // begin() is the smallest element; --end() is the largest
    cout << *s.begin() << endl;
    cout << *(--s.end()) << endl;

    return 0;
}
