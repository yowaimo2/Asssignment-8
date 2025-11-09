#include <iostream>
using namespace std;

class Sorter {
public:
    void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    void print(int arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Sorter s;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    s.bubbleSort(arr, n);
    s.print(arr, n);
    return 0;
}