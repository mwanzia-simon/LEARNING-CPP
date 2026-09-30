#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Child class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog says: Woof!" << endl;
    }
};

// Another child class
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}