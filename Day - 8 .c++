#include <iostream>
using namespace std;

void print_palindrome_pyramid(int N) {
    // Loop through each row
    for (int row = 0; row <= N; row++) {
        // print spaces 
        for (int col = 0; col<= N - row; col++) {
            cout << "  ";
        }
        
        // Print one part 
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        // print another part
        for (int col = row - 1; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;
    print_palindrome_pyramid(N);
    return 0;
}
