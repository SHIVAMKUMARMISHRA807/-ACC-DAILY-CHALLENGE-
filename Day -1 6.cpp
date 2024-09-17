#include <iostream>
using namespace std;

int frequency(int Arr[], int N, int X) {
    int count = 0;
    for (int row = 0; row < N; row++) {
        if (Arr[row] == X) {
            count++;
        }
    }
    return count;
}

int main() {
    int N = 5;
    int Arr[] = {1, 1, 1, 1, 1}; 
    int X = 1;
    
    cout << "Frequency of " << X << " is: " << frequency(Arr, N, X) << endl;
    return 0;
}
