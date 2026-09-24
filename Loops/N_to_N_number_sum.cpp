// Take a number N as input and calculate the sum of first N natural numbers.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, sum =0;
    cout << "Enter number: ";
    cin >> n;
    for (int i= 1; i<=n; i++ ){
        sum = sum+i; // sum +=i 
    }
    cout << "Sum= " << sum << "\n";
    return 0;
}