#include <iostream>
using namespace std;

class BinarySearch {
public:
    int search(int arr[], int n, int target) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) return mid;
            if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

int main() {
    BinarySearch bs;
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45};
    int n = 8;
    int target = 16;
    int result = bs.search(arr, n, target);
    cout << (result == -1 ? "Not found" : "Found at index ") 
         << result << endl;
    return 0;
}