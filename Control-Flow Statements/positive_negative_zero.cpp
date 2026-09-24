//Take a number as input and determine whether it is positive, negative, or zero.
#include <iostream>
using namespace std;

int main()
{
    double a;
    cout << " Entar a number: \n";
    cin >> a;
    if (a > 0){
        cout << a << " is a positive number \n";
    }
    else if (a<0){
        cout << a << " is a negative number \n";
    }
    else {
        cout << a << " is zero \n";
    }
    return 0;
}