/*
STL
Vector: reading n elements by index
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n);

    // read n values into the vector
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // print them in the same order
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
