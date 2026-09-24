#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name="Sourov";
    cout << "Hello, \"" << name << "\"" << endl;//("Hello, \"")= Hello, " ||| (<< name << "\"")= Sourov"

    cout << "Hello, \'" << name << "\'" << "\n";//("Hello, \'")= Hello, ' ||| (<< name << '\"")= Sourov'
    cout << "Hello,\t" << name << endl; // \t = tab(    ) print 
    return 0;
}