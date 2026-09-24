#include <iostream>
using namespace std;
int main ()
{
   //AND Operator &&
    cout << ((100>5) && (30<50)) << endl; // true && true = true, so it will print 1

    cout << ((100<5) && (30<50)) << endl; // Fals && True = Fals, so it will print 0

    // OR Operator ||
    cout << ((100>5) || (30<50)) << endl; // true && true = true, so it will print 1
    
    cout << ((100>5) || (30>50)) << endl; // true && fals = true, so it will print 1

    cout << ((100<5) && (30>50)) << endl; // fals && fals = fals, so it will print 0

    return 0;
}