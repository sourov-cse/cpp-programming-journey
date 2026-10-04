#include <iostream>
using namespace std;

class Form{
    public:
    string name;
    int age;

// Constructor 1 ----> 0 parameter
    Form (){  // ------> Non Parameterised Constructor || Default Constructor
        cout << "Hello hello" << endl;
    }

// Constructor 2 ----> 2 parameter    
    Form (string n, int a){  // ------> Parameterised Constructor 
        cout << "Parameterised Constructor" << endl;
        name = n;
        age = a;
    }

    void display (){
        cout << "{Name: " << name << ", Age: " << age << "}" << endl;
    }
};

int main (){
    Form obj1; // No value  || 0 parameter
    obj1.display();

    Form obj2 ("Milon", 23); // "Milon" --> 1st argument || 23  --> 2nd argument
    obj2.display();

    Form obj3 ("Das", 2);
    obj2.display();

    return 0;
}