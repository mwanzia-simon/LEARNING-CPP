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

public:
    // Default constructor
    Book()
    {
        bookID = 0;
        bookTitle = "Unknown";
        author = "Unknown";
    }

    // Paramitized constructor
    Book(int id, string title, string a)
    {
        bookID = id;
        bookTitle = title;
        author = a;
    }

    // Member function to display book details
    void displayDetails()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "------------------------------" << endl;
    }

    // Destructor function
    ~Book()
    {
        cout << "Book object destroyed" << endl;
    }
};

int main()
{
    Book book1;
    Book book2(101, "C++ Programming", "Bjarne Stroustrup");

    book1.displayDetails();
    book2.displayDetails();
    return 0;
}
