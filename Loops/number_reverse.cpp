// Take a number N as input and print its reverse.
#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit ;
    int rev = 0 ;
    cout << "Enter number: ";
    cin >> n;

    while (n>0) {
        lastDigit = n % 10;
        // rev *= 10 + lastDigit;            rev = rev* (10 + last Number) 
        
        rev = rev * 10 + lastDigit; // rev = rev + last Number

        n /= 10; // n= n/10   
    }
     cout << "Reverse = "<< rev <<"\n";
    return 0;
}