/* C++ Program to Reverse a Number */

#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0;

    cout << "Enter a number :: " << endl;
    cin >> num;

    cout << "Reverse of " << num << " is ";
    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    
    cout << reverse;

    return 0;
}