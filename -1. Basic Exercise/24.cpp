/* C++ Program to Check Whether a Number is Palindrome or Not */

#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0, temp;

    cout << "Enter a number :: " << endl;
    cin >> num;
    temp = num;

    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }

    if(temp == reverse)
        cout << temp << " is a plaindrome number " << endl;
    else
        cout << temp << " is not a plaindrome number " << endl;

    return 0;
}