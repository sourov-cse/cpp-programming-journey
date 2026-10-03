// Take a number N as input and determine whether it is a palindrome or not.
#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit ;

    cout << "Enter number: ";
    cin >> n;
    int copy = n;
    int rev = 0 ;

    while (n>0) {
        lastDigit = n % 10;
        // rev *= 10 + lastDigit;            rev = rev* (10 + last Number) 
        
        rev = rev * 10 + lastDigit; // rev = rev + last Number

        n /= 10; // n= n/10   
    }
     cout << ((rev == copy ) ? "Palindrome Number\n" : "Not a Palindrom Number\n" );
    return 0;
}