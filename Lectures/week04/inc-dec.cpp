// increment (++) and decrement (--)
// and ther post- and pre- variants
// difference between ++n and n++
#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    cout << "++n: " << ++n << endl; // preincrement
    cout << "n:   " << n << endl; // checking the value
    cout << "--n: " << --n << endl; // predecrement
    cout << "n:   " << n << endl; // checking the value

    cout << "n++: " << n++ << endl; // postincrement
    cout << "n:   " << n << endl; // checking the value
    cout << "n--: " << n-- << endl; // postdecrement
    cout << "n:   " << n << endl; // checking the value

    return 0;
}