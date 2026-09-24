#include <iostream>
using namespace std;
/// How to we define a class?
format:
class class_name
{
    member data;
    member function
};
class football// football is our user-defined data type
{
    public:
    int q; //member data
    void even_odd(void); // member function delcaration
};
/// How to we define a member function outside a class?

struct footbal
{
    int a;
    float f; public, protected, private
}
format:
scope resolution
return_type class_name :: function_ name (parameter_list)
{
    function_body
}
void football :: even_odd(void)
{
    cout << "Enter an integer number: ";
    cin >> q;
    if (q%2 == 0)
    {
        cout << q << " is even. ";
    }
    else { cout << q << " is odd. "}
}
int main()
{
    data_type variable;
    int a; // a is an integer type of varible
    football a; //object  // a is a football type of object

    /// how do we declare an object of its class?
    football a;  // a is a football type of object
    object_name.member_name; //dot operator
    a.q;
    a.even_odd();

    return 0;
}