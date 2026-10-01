//Take a number N as input and calculate the sum of its digits.
#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit ;
    int sum = 0 ;
    cout << "Enter number: ";
    cin >> n;

    while (n>0) {
        lastDigit = n % 10;
        sum += lastDigit; // sum = sum + last Number
        n /= 10; // n= n/10   
    }
     cout << "Sum = "<< sum <<"\n";
    return 0;
}