/*
STL
Map: the second element in sorted order
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n; // n is at least 2

    for(int i = 0; i < n; ++i) {
        string key;
        int value;
        cin >> key >> value;
        m[key] = value;
    }

    // keys are sorted: begin() is the smallest, and ++it moves to the second
    auto it = m.begin(); // auto lets the compiler figure out the iterator type
    ++it;

    // it->first is the key, it->second is the value
    cout << it->first << " " << it->second << endl;

    return 0;
}
