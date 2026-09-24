#include <iostream>
using namespace std;
int main ()
{
    int a = 46;
    a %= 15; // a =% not valid operator, it should be a %= 15; which means a = a % 15
    
    cout << a << endl; 
}