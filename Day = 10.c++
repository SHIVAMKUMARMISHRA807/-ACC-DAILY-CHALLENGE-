#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper part of the butterfly
    for (int row= 0; row < n; row++) {
        // Print the first set of stars
        for (int col = 0; col < row; col++) {
            cout << "*";
        }

        // Print the spaces
        for (int col = 0; col < 2 * (n - row); col++) {
            cout << " ";
        }

        // Print the second set of stars
        for (int col= 0; col < row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (int row = n; row >= 0; row--) {
        // Print the first set of stars
        for (int col = 0; col < row; col++) {
            cout << "*";
        }

        //  spaces
        for (int col = 0; col< 2 * (n - row); col++) {
            cout << " ";
        }

        // Print the second set of stars
        for (int col= 0; col < row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
