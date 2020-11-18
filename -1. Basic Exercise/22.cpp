/* C++ Program to Find ASCII Value of a Character */

#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character for print ASCII value :: " << endl;
    cin >> ch;

    cout << "ASCII value of " << ch << " is " << int(ch);
    
    return 0;
}