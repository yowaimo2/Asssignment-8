#include <iostream>
using namespace std;

class WordCounter {
public:
    int countWords(const char str[]) {
        int count = 0;
        bool inWord = false;
        for (int i = 0; str[i] != '\0'; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') || 
                (str[i] >= 'A' && str[i] <= 'Z')) {
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }
        return count;
    }
};

int main() {
    WordCounter wc;
    char str[] = "Hello world, this is C++";
    cout << wc.countWords(str) << endl;
    return 0;
}