#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    string isbn;
    double price;

public:
    // Set book details
    void setDetails(string bookTitle, string bookAuthor,
                    string bookIsbn, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        isbn = bookIsbn;
        price = bookPrice;
    }
    // Display book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
    // Update book price
    void updatePrice(double newPrice) {
        if (newPrice >= 0) {
            price = newPrice;
        } else {
            cout << "Price cannot be negative." << endl;
        }
    }
};

int main() {
    // Create first Book object
    Book book1;
    book1.setDetails(
        "Introduction to C++",
        "John Smith",
        "978-1234567890",
        1500
    );
    // Create second Book object
    Book book2;
    book2.setDetails(
        "Object Oriented Programming",
        "Mary Jones",
        "978-0987654321",
        2000
    );
    // Display details of both books
    book1.displayDetails();
    book2.displayDetails();
    return 0;
}