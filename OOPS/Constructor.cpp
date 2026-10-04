#include <iostream>
using namespace std;

class Form{
    public:
    string name;
    int age;

    Form (){    // ------>  Constructor
        cout << "Hello hello\n";
    }

    void intialise (string n, int a){
        name = n;
        age = a;
    }

    void display (){
        cout << "{Name: " << name << ", Age: " << age << "}" << endl;
    }
};

int main (){
    Form obj1;
    obj1.intialise ("Sourov", 21);
    obj1.display();

    Form obj2;
    obj2.intialise ("Milon", 23);
    obj1.display();

    /*
Hello hello
Hello hello
{Name: Sourov, Age: 21}
{Name: Milon, Age: 23}
    */
//    obj1.display();
//    obj1.display();

    return 0;
}