/* C++ Program to Find GCD */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers :: " << endl;
    cin >> num1 >> num2;

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2; // 24 - 12 = 12
        else
            num2 -= num1; // 60-24 = 36 --> 36 - 24 = 12
    }

    cout << "GCD of " << num1 << " and " << num2 << " is " << num1;

    return 0;
}