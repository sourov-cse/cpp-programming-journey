// hello name, you are age years old.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1;
    string name;
    int age;
    
    cout << "Enter your age : ";
    cin >> age;

    cout << "Enter your name : ";
    getline (cin, name1); // name1 store new line(\n), means The buffer is emty   
    getline (cin, name);
   
    cout << "Hello " << name << ", you are " << age << " years old. " << endl;
    return 0;
}