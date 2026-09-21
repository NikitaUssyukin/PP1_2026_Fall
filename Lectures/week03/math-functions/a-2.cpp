#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int base;
    int power;

    cin >> base >> power;

    cout << int(pow(base, power)) << endl; // explicit type casting into int
    
    return 0;
}