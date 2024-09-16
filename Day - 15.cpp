#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements ";
    cin >> n;
    
    int arr[n];
    
    // Input the array elements
    cout << "Enter the elements of the array ";
    for(int row = 0; row < n; row++) {
        cin >> arr[row];
    }

    // Initialize product as 1
    long long product = 1;
    
    // Calculate the product of all elements
    for(int row= 0; row < n; row++) {
        product *= arr[row];
    }

    // Output the product
    cout << "Product of all array elements is: " << product << endl;
    
    return 0;
}
