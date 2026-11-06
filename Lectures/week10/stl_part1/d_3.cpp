/*
STL
Vector: output with iterators
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for(int &x : v) {
        cin >> x;
    }

    // begin() points at the first element, end() one past the last
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // *it is the element the iterator points at
    }
    cout << endl;

    // auto lets the compiler deduce the iterator type
    for(auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
