#include <iostream>
using namespace std;
int findPeak(int arr[], int n) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
            (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return -1;
}
int isPeakCorrect(int arr[], int n) {
    int peakIndex = findPeak(arr, n);
    if ((peakIndex == 0 || arr[peakIndex] >= arr[peakIndex - 1]) && 
        (peakIndex == n - 1 || arr[peakIndex] >= arr[peakIndex + 1])) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int arr[] = {1, 1, 1, 2, 1, 1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << isPeakCorrect(arr, n) << endl; // Output will be 1 if the index is correct

    return 0;
}
