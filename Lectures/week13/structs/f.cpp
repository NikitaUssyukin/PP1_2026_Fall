/*
Struct
*/

#include <iostream>
#include "Animal.h"

int main() {

    Animal a(2, 1, "Lobster");
    Animal b(300, 5500, "Dragon");

    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;

    return 0;
}