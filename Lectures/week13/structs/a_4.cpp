/*
Struct
*/

#include <iostream>

using namespace std;

struct Pair {
    int first;
    int second;

    Pair(int a, int b) {
        first = a;
        second = b;
    }
};

int main() {

    int a, b;
    cin >> a >> b;
    
    Pair p(a, b);

    cout << p.first << " " << p.second << endl;

    return 0;
}