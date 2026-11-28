/*
Struct
*/

#include <iostream>
#include "Pair.h"

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    
    Pair p(a, b);

    cout << p.first << " " << p.second << endl;

    return 0;
}