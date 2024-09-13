#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << (isSorted(arr1, n1) ? "true" : "false") << endl;

    int arr2[] = {90, 80, 100, 70, 40, 30};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << (isSorted(arr2, n2) ? "true" : "false") << endl;

    return 0;
}
