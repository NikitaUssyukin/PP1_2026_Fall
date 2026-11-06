/*
STL
Vector: growing with push_back
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x); // adds x at the end; size grows by one
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
