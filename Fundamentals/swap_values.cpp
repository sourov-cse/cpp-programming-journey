#include <iostream>
using namespace std;

int main()
{
   /* int a,b;
    cout << "Enter two numbers: "<< endl;
    cin >> a >> b;
    cout << "Swap result= "<< b << " " <<a <<endl;*/ //looking swap but exactly it is print output change

    int a,b,temp;
    cout << "Enter two numbers: "<< endl;
    cin >> a >> b;

    // NOTE FOR ME:
    // a is a tea cup
    // b is a coffee cup
    // I want to swap the cups
    // So I need an extra empty cup
    // 1. temp = a;  -> save tea in extra cup
    // 2. a = b;     -> put coffee in tea cup
    // 3. b = temp;  -> put tea (from extra cup) in coffee cup
    // Now swapped.
    temp = a;
    a = b;
    b = temp; 
    cout << "Swap result= "<< a << " " << b <<endl;
    return 0;
}