/* C++ Program to Check Leap Year */

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year :: " << endl;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is LEAPYEAR !" << endl;
            else
                cout << year << " is NOT LEAPYEAR !" << endl;
        }
        else
            cout << year << " is LEAPYEAR !" << endl;
    }
    else
        cout << year << " is NOT LEAPYEAR !" << endl;

    return 0;
}