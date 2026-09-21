#include <iostream>

using namespace std;

int main() {

    bool a;
    bool b;

    cin >> a >> b;

    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << (!a) << endl;
    cout << "!b: " << (!b) << endl;
    cout << "Logical XOR ((a && !b) || (!a && b)): " << ((a && !b) || (!a && b)) << endl;

    return 0;
}