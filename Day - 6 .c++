#include <iostream>
using namespace std;

int findLength( char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char* myString = " apple,banna ,sound";
    
    int length = findLength(myString);
cout << "The length of the string  "" << myString << " " is: " << length <<endl;
    
    return 0;
}
