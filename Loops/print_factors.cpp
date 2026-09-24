//Take a number as input and print all of its factors.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter The number: ";
    cin >> n;
    cout <<  "The factors of "<< n << ":" <<"\n";
    for (int i=1; i<=n; i++){ // i=0 not valid
        if(n%i == 0){
            cout << i <<"\n";
        }
    }
    return 0;
}