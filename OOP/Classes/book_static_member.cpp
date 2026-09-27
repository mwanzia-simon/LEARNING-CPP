#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    double price;
    // Question 22: Static member
    static int bookCount;

public:
    // Constructor
    Book() {
        bookCount++;
    }
    // Setter for title
    void setTitle(string bookTitle) {
        title = bookTitle;
    }

    // Getter for title
    string getTitle() {
        return title;
    }
    // Setter for price with validation
    void setPrice(double bookPrice) {
        if (bookPrice >= 0) {
            price = bookPrice;
        } else {
            cout << "Invalid price. Price cannot be negative."
                 << endl;
        }
    }
    // Getter for price
    double getPrice() {
        return price;
    }
    // Static member function
    static int getBookCount() {
        return bookCount;
    }
};

// Initialize the static member
int Book::bookCount = 0;
int main() {
    // Question 23: Create three Book objects
    Book book1;
    Book book2;
    Book book3;
    // Question 24: Display total number of Book objects
    cout << "Total number of books: "
         << Book::getBookCount() << endl;
    return 0;
}