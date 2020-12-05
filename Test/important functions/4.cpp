/* WAP to calculate the division of two numbers using function, [yes receive yes return] */

#include <iostream>
using namespace std;

inline float division(float num1, float num2)
{
    return (num1 / num2);
}

int main()
{
    float num1, num2;

    cout << "Enter 2 number :: " << endl;
    cin >> num1 >> num2;

    cout << num1 << " / " << num2 << " = " << division(num1, num2);

    return 0;
}