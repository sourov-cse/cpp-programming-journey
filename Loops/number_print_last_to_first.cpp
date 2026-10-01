#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit ;
    cout << "Enter number: ";
    cin >> n;

    while (n>0) {
        lastDigit = n % 10;
        cout << lastDigit <<"\n";
        n /= 10; // n= n/10
        
    }
    return 0;
}