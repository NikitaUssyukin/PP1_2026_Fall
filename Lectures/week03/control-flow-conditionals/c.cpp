#include <iostream>

using namespace std;

int main() {
    
    int x;
    cin >> x; // [0; 10000) - guaranteed range of itn values in the input

    /*
    - get a number
    - check how many digits it has
    - output the result
    */

    /*
    1 -> one digit
    15 -> two digits
    123 -> three digits
    1234 -> four digits
    */
    
    // determine if it is more than 10 and less than 100
    // [0; 10) - 0.1% of the [0; 10000) range
    if(x < 10) { // 1, 2, 3, 4 digits
        cout << "one digit" << endl;
    } // 2, 3, 4
    else if(x < 100) { // [10; 100) - 0.9% of the [0; 10000) range
        cout << "two digits" << endl;
    } // 3, 4
    else if(x < 1000) { // [100; 1000) - 9% of the [0; 10000) range
        cout << "three digits" << endl;
    } // 4
    else { // all the rest - remaining 90% of the range
        cout << "four digits" << endl;
    }
    
    return 0;
}