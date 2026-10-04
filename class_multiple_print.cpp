#include <iostream>
using namespace std;

class Form{
    public:
    string name;
    int age;

    void intialise (string n, int a){
        name = n;
        age = a;
    }

    void display (){
        cout << "{Name: " << name << ", Age: " << age << "}" << endl;
/*
    "{Name: "   // text
    name        // variable
    ", Age: "   // text
    age         // variable
    "}"         // text
*/
    }
};

int main (){
    Form obj1;
    obj1.intialise ("Sourov", 21);

    Form obj2;
    obj2.intialise ("Milon", 23);

    obj1.display();
    obj2.display();

    return 0;
}