/*
STL
Map: counting words
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        ++m[word]; // a missing key starts at 0, then becomes 1
    }

    for(pair<string, int> p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
