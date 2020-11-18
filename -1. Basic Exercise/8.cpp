/*  C++ Program to Check Whether a character is Vowel or Consonant. */

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character :: " << endl;
    cin >> ch;
    char temp = tolower(ch);

    switch (temp)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a VOWEL !" << endl;
        break;
    default:
        cout << ch << " is a CONSONENT !" << endl;
        break;
    }

    return 0;
}