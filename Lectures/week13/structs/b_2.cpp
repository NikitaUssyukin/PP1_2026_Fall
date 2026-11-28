/*
Struct
*/

#include <iostream>

using namespace std;

struct Animal {
    int age;
    int weight;
    string name;

    Animal(int age, int weight, string name) {
        // cout << this << endl;
        this->age = age;      // same as (*this).age = age;
        this->weight = weight;
        this->name = name;
    }
};

int main() {

    Animal a(2, 36, "Spherical Monkey");
    // cout << &a << endl;

    cout << a.age << " " << a.weight << " " << a.name;
    cout << "\n";

    return 0;
}