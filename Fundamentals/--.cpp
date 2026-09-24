#include <iostream>
using namespace std;
int main ()
{
    int a =1;
    cout << a++ << endl; // 1 || a=1+1 = 2
    cout << ++a << endl; // 3 || a = 1+2 =3
    cout << a-- << endl; // 3 || a =3-1= 2
    cout << --a << endl; // 1 || a =-1+2= 1
    
    return 0;
}
