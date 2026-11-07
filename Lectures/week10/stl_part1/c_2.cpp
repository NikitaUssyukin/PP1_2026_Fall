/*
STL
Vector: reading one line with stringstream
*/

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    // read the whole line first
    string s;
    getline(cin, s);

    // a stringstream reads values from the line just like cin reads from the keyboard
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
