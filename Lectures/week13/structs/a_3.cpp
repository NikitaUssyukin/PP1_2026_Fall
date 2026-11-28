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

    Pair p;

    cin >> p.first >> p.second;

    cout << p.first << " " << p.second << endl;

    return 0;
}