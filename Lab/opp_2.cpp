// Function overloading
#include <iostream>
using namespace std;

class overload // overload is our user-defined data type
{
public:
    void jupiter (void);
    int jupiter (int, int);    
    
};
void overload :: jupiter (void)
{
    cout << "jdakjduwdhd.....\n";
}
int overload :: jupiter (int a, int b)
{
    int c= a*b;
    return c;
}
int main ()
{
    
}