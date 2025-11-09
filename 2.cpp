#include <iostream>
using namespace std;

class Fibonacci {
public:
    void print(int n) {
        int a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            cout << a << " ";
            int next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci f;
    f.print(10);
    return 0;
}