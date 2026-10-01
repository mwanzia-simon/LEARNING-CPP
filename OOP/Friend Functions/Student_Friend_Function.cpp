#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student() : name("Unknown"), marks(0) {}

    Student(string n, int m)
        : name(n), marks(m) {}

    ~Student() {
        // No manual resource cleanup is required here.
    }

    friend void display(const Student& s);
};

void display(const Student& s) {
    cout << s.name << ": " << s.marks << endl;
}

int main() {
    Student a;
    Student b("Carol", 84);

    display(a);
    display(b);

    return 0;
}
