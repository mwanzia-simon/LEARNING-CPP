#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student() {
        name = "Unknown";
        marks = 0;
    }

    void display() const {
        cout << name << ": " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.display();
    return 0;
}
