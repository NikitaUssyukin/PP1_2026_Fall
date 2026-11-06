/*
STL
Vector: reading until the end of input
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

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
