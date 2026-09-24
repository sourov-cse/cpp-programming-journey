// condition _ ? _ 1st statement _ : _ 2nd statement

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    /*
     if (age >= 18){
        cout << "Valid Votar \n";
    }
    else {
        cout << "Not a valid votar \n";
    */
   // (age >= 18) ? cout << "Valid Votar \n" :cout << "Not a valid votar \n";

    cout << ((age >= 18) ? "Valid voter\n" : "Not a valid voter ") ;
    return 0;
}