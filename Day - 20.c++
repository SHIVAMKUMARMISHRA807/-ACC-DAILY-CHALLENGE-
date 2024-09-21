#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string s) {
    stack<char> stk;
    for (char ch : s) {
        if (!stk.empty() && stk.top() == ch) {
            stk.pop();
        } else {
            stk.push(ch);
        }
    }
    string result = "";
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }

    return result;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Output: " << removeDuplicates(s) << endl;

    return 0;
}
