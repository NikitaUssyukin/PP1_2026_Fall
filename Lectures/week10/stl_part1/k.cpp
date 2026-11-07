/*
STL
Map: adding to the value of a key
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

        // a new key starts at 0, so += adds to the old value or to 0
        m[key] += value;
    }

    for(pair<string, int> p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
