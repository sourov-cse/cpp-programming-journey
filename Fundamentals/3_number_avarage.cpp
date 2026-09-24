#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2, num3, sum ;
    double avarage;
    cout << "Enter three numbers: "<< endl;
    cin >> num1 >> num2 >> num3;

    sum = num1+num2+num3;
    cout << "Sum = "<< sum<< endl;
    avarage= (double)sum/3; // int/int = int, so type custing needed
    cout << "Avarage is "<< avarage << endl;
    return 0;
}