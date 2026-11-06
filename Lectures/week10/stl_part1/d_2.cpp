/*
STL
Vector: output with a range-based for loop
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for(int &x : v) {
        cin >> x;
    }

    // int x copies each element; the loop cannot modify the vector
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
