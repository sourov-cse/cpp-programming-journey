//Take a number as input and determine whether it is even or odd.
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << " Enter a number: \n";
    cin >> a;
    if (a %2 == 0){
        cout << a << " is even. \n";
    }
    else {
        cout << a << " is odd. \n";
    }
    return 0;
}