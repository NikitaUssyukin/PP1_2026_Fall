/*
STL
Vector: reading one line with stringstream
*/

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<int> v;
    int x;
    while(ss >> x) {
        v.push_back(x);
    }

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
