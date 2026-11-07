/*
STL
Map: looking up a key without creating it
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, string> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string key, value;
        cin >> key >> value;
        m[key] = value;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; ++i) {
        string key;
        cin >> key;

        // find() does not create the key; m[key] would create it with an empty value
        // auto lets the compiler figure out the iterator type
        auto it = m.find(key);
        if(it != m.end()) {
            // it->first is the key, it->second is the value
            cout << it->first << " " << it->second << endl;
        }
        else {
            cout << "no key " << key << endl;
        }
    }

    return 0;
}
