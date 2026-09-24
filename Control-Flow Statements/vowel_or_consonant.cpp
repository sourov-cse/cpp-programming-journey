// Take character as input and check whether it is a vowel or consonant(using switch)
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

  /*  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " is a vowel";
    }
    else
    {
        cout << ch << " is a consonant";
    }
*/
    switch (ch){
        case 'a': case 'e': case 'i': case '0': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel\n";
            break;
          
        default :
            cout << "Consonant\n";
        
    }
    return 0;
}