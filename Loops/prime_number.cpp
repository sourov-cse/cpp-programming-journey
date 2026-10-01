// Take a number as input and determine whether it is prime or not
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int n; 
    int prime, count=0 ;
    cout << "Enter the number: ";
    cin>> n;
    for(int i=1; i<=n; i++){
        if(n%i == 0)
            count++;
    }
    cout << (count == 2 ? "Prime number" : "Not prime")  << "\n"; // condition ? TRUE : FALSE;

    return 0;
}