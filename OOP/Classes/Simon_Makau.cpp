
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productCode;
    string productName;
    double price;

public:
    void setProductCode(string code)
    {
        productCode = code;
    }


    string getProductCode()
    {
        return productCode;
    }

    
    void setProductName(string name)
    {
        productName = name;
    }


    string getProductName()
    {
        return productName;
    }

   
    void setPrice(double productPrice)
    {
        if (productPrice >= 0)
        {
            price = productPrice;
        }
        else
        {
            price = 0;
            cout << "Price cannot be negative. Price set to 0." << endl;
        }
    }

    double getPrice()
    {
        return price;
    }
};

int main()
{

    Product product1;
    Product product2;
    Product product3;
    product1.setProductCode("P001");
    product1.setProductName("Laptop");
    product1.setPrice(75000);

    product2.setProductCode("P002");
    product2.setProductName("Smartphone");
    product2.setPrice(45000);

    product3.setProductCode("P003");
    product3.setProductName("Headphones");
    product3.setPrice(5000);

    cout << "===== PRODUCT DETAILS =====" << endl;
    cout << "\nProduct 1" << endl;
    cout << "Code: " << product1.getProductCode() << endl;
    cout << "Name: " << product1.getProductName() << endl;
    cout << "Price: " << product1.getPrice() << endl;

    cout << "\nProduct 2" << endl;
    cout << "Code: " << product2.getProductCode() << endl;
    cout << "Name: " << product2.getProductName() << endl;
    cout << "Price: " << product2.getPrice() << endl;

    cout << "\nProduct 3" << endl;
    cout << "Code: " << product3.getProductCode() << endl;
    cout << "Name: " << product3.getProductName() << endl;
    cout << "Price: " << product3.getPrice() << endl;

    return 0;
}
