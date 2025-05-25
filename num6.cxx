#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    int a_for_gcd = num1;
    int b_for_gcd = num2;


    if (a_for_gcd == 0 && b_for_gcd == 0) {

    while (b_for_gcd != 0) {
        int temp = b_for_gcd;
        b_for_gcd = a_for_gcd % b_for_gcd;
        a_for_gcd = temp;
    }
    int gcd = a_for_gcd; 

   
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    long long lcm = (static_cast<long long>(num1) * num2) / gcd;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}