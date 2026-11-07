/*
STL
Map: counting numbers and finding the smallest/largest key
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> m;

    int n;
    cin >> n; // n is at least 1

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++m[x];
    }

    // keys are sorted, so begin() is the smallest and --end() the largest
    cout << (*m.begin()).first << endl;
    cout << (*(--m.end())).first << endl;

    return 0;
}
