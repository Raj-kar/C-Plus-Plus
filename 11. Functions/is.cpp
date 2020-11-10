#include<iostream.h>
using namespace std;

int main()
{

    char c;

    cout << "Enter a letter :: " << endl;
    cin >> c;

    switch(c)
    {
        case 'a': cout << "VOWEL" ;
        break;

        case 'e': cout << "VOWEL" ;
        break;

        case 'i': cout << "VOWEL" ;
        break;

        case 'o': cout << "VOWEL" ;
        break;

        case 'u': cout << "VOWEL" ;
        break;
        
        default: cout << "CONSONENT"
    }

    return 0;
}