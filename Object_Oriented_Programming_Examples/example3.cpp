#include <iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    Student() {
        ++count;
    }

    static int getCount() {
        return count;
    }
};

int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "Number of students: "
         << Student::getCount() << endl;

    return 0;
}