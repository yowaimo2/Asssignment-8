#include <iostream>
using namespace std;

class DiagonalSum {
    int n;
    int a[100][100];
public:
    void input() {
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
    }
    int primary() {
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += a[i][i];
        return sum;
    }
    int secondary() {
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += a[i][n-1-i];
        return sum;
    }
};

int main() {
    DiagonalSum d;
    d.input();
    cout << d.primary() << endl;
    cout << d.secondary() << endl;
    return 0;
}