#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int base;
    int power;

    cin >> base >> power;

    long long res = pow(base, power); // implicit type casting into long long

    cout << res << endl;
    
    return 0;
}