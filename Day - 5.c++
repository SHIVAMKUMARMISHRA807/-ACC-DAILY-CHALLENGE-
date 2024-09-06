#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDuplicates(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[arr[i] % n] += n;
    }
    vector<int> duplicates;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 2 * n) {
            duplicates.push_back(i);
        }
    }
    if (duplicates.empty()) {
        return {-1};
    } else {
        return duplicates;
    }
}

int main() {
    vector<int> arr = {0, 4, 3, 2, 4, 8, 2, 3, 1};
    int n = arr.size();
    vector<int> result = findDuplicates(arr, n);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}
