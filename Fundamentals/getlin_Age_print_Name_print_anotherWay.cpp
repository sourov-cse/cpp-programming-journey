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
     cin.ignore(); // cin.ignore()= New line(\n) ignore, Now Buffer is empty  
    getline (cin, name);
   
    cout << "Hello " << name << ", you are " << age << " years old. " << endl;
    return 0;
}