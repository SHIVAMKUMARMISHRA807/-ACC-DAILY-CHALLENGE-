#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int thirdLargest(const vector<int>& arr) {
    set<int> unique_elements(arr.begin(), arr.end());
    if (unique_elements.size() < 3) {
        return -1;
    }
    vector<int> sorted_elements(unique_elements.rbegin(), unique_elements.rend());
    return sorted_elements[2];
}

int main() {
    vector<int> arr = {2,4,1,3,5};
    int result = thirdLargest(arr);
    if (result != -1) {
        cout << "The third largest element is: " << result << endl;
    } else {
        cout << "The third largest element is not found." << endl;
    }
    
    return 0;
}
