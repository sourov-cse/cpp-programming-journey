// Take the purchase amount as input and apply the following discount and print final amount.
/* 0-5000 =0%
5001-7000 =5%
7001-9000 =10%
More than 9000 =20%
*/
#include <iostream>
using namespace std;

int main()
{
    int taka;
    double dis, dis_bill, pay;
    cout <<"Enter your shoping amount: ";
    cin >> taka;

    if(taka >= 0 && 5000 >= taka)
    dis = 0;

    else if (5000 <= taka && 7000 >= taka)
    dis = 0.05; // 5%=    5/100 = 0.05

    else if (7000 <= taka && 9000 >= taka)
    dis = 0.1; // 5%=    5/100 = 0.1

    else dis = 0.2;

    dis_bill =taka * dis;
    cout << "Your discount amount = " << dis_bill << "\n";

    pay = taka - dis_bill;
    cout << "Your payment amount = " << pay;

    return 0;
}