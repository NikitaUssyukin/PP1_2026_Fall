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
        this->age = age;      // same as (*this).age = age;
        this->weight = weight;
        this->name = name;
    }

    void print() {
        cout << this->age << " " << this->weight << " " << this->name;
        cout << "\n"; 
    }
};

int main() {

    Animal a(2, 1, "Lobster");
    Animal b(300, 5500, "Dragon");

    a.print();
    b.print();

    return 0;
}