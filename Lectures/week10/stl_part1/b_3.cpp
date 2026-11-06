/*
STL
Vector: reading with a range-based for loop
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n);

    // int &x is a reference: cin writes into the vector element itself
    for(int &x : v) {
        cin >> x;
    }

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
