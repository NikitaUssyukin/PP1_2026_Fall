#include <iostream>
#include <string>

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
