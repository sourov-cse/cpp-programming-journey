#include <iostream>
using namespace std;
int main ()
{
    // Decimal number
    cout << 012 << endl; /* 012 start in 0, so it is an octal number.
     012 = 0*8^2 + 1*8^1 + 2*8^0
         = 0 + 8 + 2 = 10,(Decimal) so it will print 10 */

    // Binary Number
    cout << 0B1010 << endl; /* 0B1010 start in 0B, so it is a binary number.
     0B1010 = 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0
            = 8 + 0 + 2 + 0 = 10,(Decimal) so it will print 10 */ 
    
    // Hexadecimal Number
    cout << 0XA << endl; /* 0XA start in 0X, so it is a hexadecimal number.
     0XA = 10,(Decimal) so it will print 10 */
             
    return 0;
}