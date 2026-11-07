/*
STL
Vector: reading until the end of input
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    // keep reading until there is no more input (end of file)
    int x;
    while(cin >> x) {
        v.push_back(x);
    }

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
