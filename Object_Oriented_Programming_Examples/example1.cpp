#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setName(const string& n) {
        name = n;
    }

    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        }
    }

    string getName() const {
        return name;
    }

    int getMarks() const {
        return marks;
    }
};

int main() {
    Student s;

    s.setName("Brian");
    s.setMarks(78);

    cout << s.getName() << " scored ";
    cout << s.getMarks() << endl;

    return 0;
}
