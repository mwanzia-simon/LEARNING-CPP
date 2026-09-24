#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
    void setTitle(const string& t) {
        title = t;
    }

    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        }
    }

    string getTitle() const {
        return title;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    Book book1;

    book1.setTitle("Introduction to C++");
    book1.setPrice(1500);

    cout << book1.getTitle() << endl;
    cout << "Price: KES " << book1.getPrice() << endl;

    return 0;
}
