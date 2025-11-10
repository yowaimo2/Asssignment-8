#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    
    cout << "Sum (int): " << calc.add(5, 10) << endl;
    cout << "Sum (double): " << calc.add(3.5, 7.2) << endl;
    cout << "Sum (three ints): " << calc.add(1, 2, 3) << endl;
    
    return 0;
}