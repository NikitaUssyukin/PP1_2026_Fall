/*
STL
Pair: reading the two values
*/

#include <iostream>
#include <utility>

using namespace std;

int main() {

    pair<string, int> p;

    cin >> p.first >> p.second;

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}
