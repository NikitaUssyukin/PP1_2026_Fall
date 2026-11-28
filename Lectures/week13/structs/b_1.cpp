/*
Struct
*/

#include <iostream>

using namespace std;

struct Animal {
    int age;
    int weight;
    string name;
};

int main() {

    Animal a;

    cin >> a.age >> a.weight >> a.name;

    cout << a.age << " " << a.weight << " " << a.name;
    cout << "\n";

    return 0;
}