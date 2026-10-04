#include <iostream>
using namespace std;

/*  
----->  private
// Bluprint
class Form{
    string name;
    int age;
 */

// Bluprint
class Form{
    public: // access modifier
    string name; // data members
    int age;
};

//Object
int main (){
    Form obj1;
    obj1.name ="Sourov";
    obj1.age = 21;

    Form obj2;
    obj2.name = "Milon";
    obj2.age = 23;

    cout << "Name: " << obj1.name << ", Age: " << obj1.age << endl;
    cout << "Name: " << obj2.name << ", Age: " << obj2.age << endl;

    return 0;
}