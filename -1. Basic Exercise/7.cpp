/*  C++ Program to Check Whether Number is Even or Odd */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number :: " << endl;
    cin >> num;

    if(num % 2 == 0)
        cout << num << " is Even !" << endl;
    else 
        cout << num << " is Odd !" << endl;

    return 0;
}