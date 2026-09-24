
#include <iostream>
using namespace std;

int main()
{
     int a,b ;
    cout << "Enter two number:\n ";
    cin >> a >> b;
    if (a > b){
        cout << a << " is greater than " << b <<"\n";
    }
    else if (b > a) {
        cout << b << " is greater than " << a <<"\n";
    }
    else {
        cout << a << " and " << b << " are equal" << "\n";
    }
    return 0;
}