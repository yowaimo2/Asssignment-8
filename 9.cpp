#include <iostream>
using namespace std;

class Swap {
public:
    void swapByReference(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Swap s;
    int x, y;
    cin >> x >> y;
    s.swapByReference(x, y);
    cout << x << " " << y << endl;
    return 0;
}