/*
STL
Pair: two values of different types
*/

#include <iostream>
#include <utility>

using namespace std;

int main() {

    // a pair holds two values of different types
    pair<string, int> p = make_pair("Apples", 20);

    // first is the string, second is the int
    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}
