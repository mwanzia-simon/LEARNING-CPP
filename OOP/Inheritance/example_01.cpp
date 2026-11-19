#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() const {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Cat meows" << endl;
    }
};

// Derived class Cow
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Cow moos" << endl;
    }
};

int main() {

    Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;

    // Base class pointer
    Animal* ptr;

    ptr = &animal;
    ptr->makeSound();

    ptr = &dog;
    ptr->makeSound();

    ptr = &cat;
    ptr->makeSound();

    ptr = &cow;
    ptr->makeSound();

    return 0;
}