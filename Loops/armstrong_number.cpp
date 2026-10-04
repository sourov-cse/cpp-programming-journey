// ake a number as input and determine whether it is an Armstrong number or not.
#include <iostream>
#include <cmath>
using namespace std;
int main (){
int n;

cout << "Enter Number: ";
cin >> n;
int c=0;
int copy = n;
int sum = 0;

// count of degit
while (n > 0){
    c++;
    n /= 10;   
}
// cout << c << endl;

/*     Only output sum
n = copy;
while (n > 0){
    int lastD = n % 10;
    sum = sum + lastD;
    n /= 10;
}
cout << sum << endl;*/

n = copy;
while (n > 0){
    int lastD = n % 10;
    sum += pow (lastD, c); // lastD ^c
    n /= 10;
}
// cout << sum << "\n";2
cout << ((sum == n) ? "Armstrong \n" : "Not Armstrong\n"); 
return 0;
}