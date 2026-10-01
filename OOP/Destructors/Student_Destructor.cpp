#include <iostream>
using namespace std;

class Student {
public:
    // Constructor
    Student() {
        cout << "Student object created." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student object destroyed." << endl;
    }
};

int main() {

    Student student1;

    cout << "Student is being used." << endl;

    return 0;
}

// 🗑️ What is a destructor?

// A destructor is a special function that is automatically called when an object is destroyed.

// Its main purpose is to clean up resources that the object was using, such as dynamically allocated memory, files, or other resources.

// Think of it like:

// Constructor → sets things up 🏗️
// Destructor → cleans things up 🧹

// Important characteristics

// A destructor:

// Has the same name as the class
// Starts with a ~ (tilde)
// Has no return type
// Takes no parameters
// Is called automatically
// A class can have only one destructor