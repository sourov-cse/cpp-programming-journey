//Take a number as input and calculate its factorial.
#include <iostream>
using namespace std;

int main()
{
    int n, fact =1;
    cout << "Enter number: ";
    cin >> n;
    for (int i= 1; i<=n; i++ ){
        fact *= i ; //sum+i
    }
    cout << "Factorial= " << fact << "\n"; //5*4*3*2*1 = 120
    return 0;
}