// Take a year as input and determine whether it is a leap year
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " leap year";
    }
    else {
        cout << year << " not a leap year ";
    }
    return 0;
}