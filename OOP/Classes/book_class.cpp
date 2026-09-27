#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;
public:
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
            cout << "Invalid price. Price cannot be negative." << endl;
        }
    }
    // Getter for price
    double getPrice() {
        return price;
    }
    // Display book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book book1;
    book1.setTitle("Introduction to C++");
    book1.setPrice(1500);
    book1.displayDetails();
    return 0;
}