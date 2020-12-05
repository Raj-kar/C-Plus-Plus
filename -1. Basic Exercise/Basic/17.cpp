/* C++ Program to Find LCM */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp1, temp2;

    cout << "Enter two numbers :: " << endl;
    cin >> num1 >> num2;
    temp1 = num1, temp2 = num2; /* store the values in a temp variable */

while (num1 != num2)
{
    if (num1 > num2)
        num1 -= num2; // 24 - 12 = 12
    else
        num2 -= num1; // 60-24 = 36 --> 36 - 24 = 12
    }

    cout << "LCM/HCF of " << num1 << " and " << num2 << " is " << ((temp1 * temp2) / num1);

    return 0;
}