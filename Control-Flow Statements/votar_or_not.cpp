#include <iostream>
using namespace std;

int main()
{
    int age ;
    cout << "Enter your age: " << "\n";
    cin >> age;
    if (age >= 18){
        cout << "Valid Votar \n";
    }
    else {
        cout << "Not a valid votar \n";
    }
    return 0;
}