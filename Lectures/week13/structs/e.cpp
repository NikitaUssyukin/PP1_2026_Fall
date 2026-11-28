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

    bool operator==(Animal another) {
        return (
            (this->age == another.age) &&
            (this->weight == another.weight) &&
            (this->name == another.name)
        );
    }

    bool operator<(Animal another) {
        if(this->age != another.age) return this->age < another.age;
        return this->weight < another.weight;
    }

    bool operator>(Animal another) {
        if(this->age != another.age) return this->age > another.age;
        return this->weight > another.weight;
    }
};

int main() {

    Animal a(2, 1, "Lobster");
    Animal b(300, 5500, "Dragon");

    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;

    return 0;
}