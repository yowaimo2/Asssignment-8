#include <iostream>
using namespace std;

class StringHandler {
public:
    void copyString(char dest[], const char src[]) {
        int i = 0;
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
};

int main() {
    StringHandler sh;
    char src[] = "HelloWorld";
    char dest[20];
    sh.copyString(dest, src);
    cout << dest << endl;
    return 0;
}