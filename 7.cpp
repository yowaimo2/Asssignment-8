#include <iostream>
using namespace std;

class Matrix {
public:
    void add(int a[][4], int b[][4], int result[][4], int row, int col) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                result[i][j] = a[i][j] + b[i][j];
    }
    void print(int m[][4], int row, int col) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++)
                cout << m[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    int result[3][4];
    m.add(a, b, result, 3, 4);
    m.print(result, 3, 4);
    return 0;
}