/*
STL
Map: keys and values, kept sorted by key
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string key;
        int value;
        cin >> key >> value;
        // m[key] creates the key if it is missing
        m[key] = value;
    }

    // each element is a pair: first is the key, second is the value
    for(pair<string, int> p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
