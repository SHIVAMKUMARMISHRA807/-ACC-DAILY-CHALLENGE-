#include <iostream>
#include <cstdlib> 
using namespace std;
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return abs(a * b) / gcd(a, b);
}

int main() {
    int A, B;

    cout << "Enter two integers: ";
    cin >> A >> B;

    int gcd_result = gcd(A, B);
    int lcm_result = lcm(A, B);

    cout << "GCD of " << A << " and " << B << " is= " << gcd_result << endl;
    cout << "LCM of " << A << " and " << B << " is= " << lcm_result << endl;

    return 0;
}
