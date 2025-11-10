#include <iostream>
using namespace std;

class Car {
    string brand;
    float price;
public:
    void setData(string b, float p) {
        brand = b;
        price = p;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "----------------" << endl;
    }
};

int main() {
    Car c1, c2, c3;
    
    c1.setData("Toyota", 2500000);
    c2.setData("Honda", 1800000);
    c3.setData("Hyundai", 1500000);
    
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}