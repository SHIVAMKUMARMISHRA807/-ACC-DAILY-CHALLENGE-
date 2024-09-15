#include <iostream>
using namespace std;

void rearrangeArray(int arr[], int n) {
    int col = 0;
    for (int row= 0; row < n; row++) {
        if (arr[row] >= 0) {
            if (row != col) {
                swap(arr[row], arr[col]);
            }
            col++;
        }
    }
}

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrangeArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
