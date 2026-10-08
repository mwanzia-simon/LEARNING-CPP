// Question 3: Constructors and Destructors (5 Marks)
// Create a C++ class named Book with the following attributes:
// - bookID
// - bookTitle
// - author
// Tasks:
// a) Create a default constructor that initializes the attributes with default values. (1 mark)
// b) Create a parameterized constructor that accepts values for all attributes. (2 marks)
// c) Create a destructor that displays the message "Book object destroyed". (1 mark)
// d) Create two book objects and display their details. (1 mark)

#include <iostream>
using namespace std;

class Book
{
private:
    int bookID;
    string bookTitle;
    string author;
};

int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
