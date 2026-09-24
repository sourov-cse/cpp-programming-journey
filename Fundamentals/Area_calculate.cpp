#include <iostream>
using namespace std;
int main ()
{
    double L, B, area, perimeter;
    cout << "Enter length: "<< endl;
    cin >> L;
    cout << "Enter breadth: "<< endl;
    cin >> B;
    area = L*B;
    perimeter = 2*(L+B);
    cout << "Area = "<< area << endl;
    cout << "Perimeter = "<< perimeter << endl;
    return 0;
}