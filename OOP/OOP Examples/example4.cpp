#include <iostream>
#include <string>
using namespace std;

class Mobilephone {
    private: 
    std::string brand;
    int batterylevel; 

    public: 
    void setBrand(const string& b) {
        brand=b;
    }
    void setbatterylevel(int level) {
        if (level >= 0 && level <= 100)
            batterylevel = level;
    }

    string getBrand() const {
        return  brand;
    }

    int getbatterylevel() const {
        return batterylevel;
    }
};
 
int main () {
    Mobilephone phone1;
    phone1.setBrand("samsung");
    phone1.setbatterylevel(80);
    cout <<phone1.getBrand()<<endl;
    cout << "Battery Level:" <<phone1.getbatterylevel()<<endl;
    return 0; 

}