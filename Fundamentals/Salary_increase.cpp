//Take a salary as input and increase it by ₹5000 using assignment operators

#include <iostream>
using namespace std;

int main()
{
    int s;
    cout << "Your salary: "<< endl;
    cin >> s;
    s +=5000;
    cout << "Total salary = " << s <<endl;
    return 0;
}