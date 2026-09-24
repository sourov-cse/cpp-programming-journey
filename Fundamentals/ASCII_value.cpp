// Take a character as input and print its ASCII value
#include <iostream>
using namespace std;
int main ()
{
    char ch ;
    int a ;
    cout << "Enter a character: " << "\n";
    cin >> ch;
    cout << "Enter a number: " << "\n";
    cin >> a;
    cout << "ASCII value of " << ch << " is " << int (ch) << "\n";
    cout << "Character for ASCII value " << a << " is " << char(a) << "\n";

    return 0;

}