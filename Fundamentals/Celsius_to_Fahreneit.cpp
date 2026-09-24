#include <iostream>
using namespace std;

int main()
{
    double c,f;
    cout << "Temperature in Celsius: " << endl;
    cin >> c;
    f= (c * 9/5) + 32;
    cout << "Temperature in Fahrenheit = " << f << endl;
    return 0;
}