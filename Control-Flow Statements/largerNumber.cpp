//Take two numbers as input and print the larger number.
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter two number: \n";
    cin >> a >> b;
    if (a>b){
        cout << a << " is larger number \n";
    } 
    else if (b>a){
        cout << b << " is larger number \n";
    }
    else {
        cout << a << " and " << b << " are equal \n";
    }
    return 0;
}