/*
for( শুরু ; কতক্ষণ চলবে ; প্রতিবার কি হবে ){
   কাজ
}
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //int i,n;
    // for (i=1; i<=n; i++) old rule
    int n;
    cout << "Enter number: ";
    cin >> n;
//      start   condition  increment
    for (int i=1; i<=n; i++){
        cout << "Test \n";
    }
    return 0;
}