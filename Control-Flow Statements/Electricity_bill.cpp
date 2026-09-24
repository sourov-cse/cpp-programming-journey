//Take units as input. Calculate the electricity bill based on the number of units consumed.
/*  
    up to 100 = 4.2 $
    101-200 = 6 $
    201-400 = 8 $
    More than 400 = 13 $
*/

# include <iostream>
using namespace std;
int main (){
    double uni, bill=0 ;
    cout << "Enter youe units: "; // input = 460
    cin >> uni;

    /// This is wrong systam
    /*
    if(uni > 0 && uni <= 100)
    taka = 4.2;

    else if (uni >= 100 && uni <= 200)
    taka = 6;

    else if (uni >= 200 && uni <= 400)
    taka = 8;

    else if(uni > 400)
    taka = 13;

    bill = uni*taka;
    cout << "Your bill = " << bill ;
    */

    if (uni > 400){
        bill += (uni - 400) *13; // bill = 0 + (uni - 400)*13
        uni = 400;
    }
    if (uni >= 201 && uni <= 400){
        bill += (uni - 200)*8;// bill = 780 + (uni - 200)*8
        uni = 200;
    }
    if (uni >= 101 && uni <= 200){
        bill += (uni - 100)*6;// bill = 2380 + (uni - 100)*6
        uni = 100;
    }
    bill += uni*4.2;// bill = 2980 + (uni*4.2)

    cout << "Your bill = " << bill ; // output = 3400

    return 0;
}