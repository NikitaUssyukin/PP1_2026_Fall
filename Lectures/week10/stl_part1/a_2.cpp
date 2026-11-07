/*
STL
Vector: a vector of n elements
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n); // n elements, each starts as 0

    cout << v.size() << endl;

    return 0;
}
