#include <iostream>
#include <string>
using namespace std;

int main() {

    // 1. INTEGER
    int age = 20;

    // 2. DECIMAL NUMBER
    double height = 1.75;

    // 3. FLOAT
    float temperature = 25.5f;

    // 4. CHARACTER
    char grade = 'A';

    // 5. BOOLEAN
    bool isStudent = true;

    // 6. STRING
    string name = "Simon";

    // 7. CONSTANT
    const double PI = 3.14159;


    // USING THE VARIABLES

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Temperature: " << temperature << " C" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is student: " << isStudent << endl;
    cout << "PI: " << PI << endl;


    // USING VARIABLES IN CALCULATIONS

    int number1 = 10;
    int number2 = 5;

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    int division = number1 / number2;

    cout << "\nCalculations:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;


    // CHANGING A VARIABLE

    age = 21;

    cout << "\nUpdated age: " << age << endl;


    return 0;
}