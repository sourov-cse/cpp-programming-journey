#include <iostream>
using namespace std;

class Form{
    public:
    string name;
    int age;

    Form (string n, int a){
        name = n;
        age = a;
    }

    void display (){
        cout << "{Name: " << name << ", Age: " << age << "}" << endl;
    }
};

int main (){
    Form obj1 ("Sourov", 21);
    obj1.display();

    Form obj2 ("Milon", 23);
    obj2.display();

    return 0;
}