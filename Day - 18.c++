#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> findUniquePairs(vector<int>& arr) 
{
    sort(arr.begin(), arr.end());
    set<int> seen;
    set<pair<int, int>> pairs; 
    for (int num : arr) 
    {
        if (seen.find(-num) != seen.end()) 
        {
            pairs.insert({min(num, -num), max(num, -num)});
        }
        seen.insert(num);
    }
    vector<vector<int>> result;
    for (auto p : pairs) 
    {
        result.push_back({p.first, p.second});
    }

    return result;
}

int main() 
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = findUniquePairs(arr);
    for (const auto& pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }

    return 0;
}
