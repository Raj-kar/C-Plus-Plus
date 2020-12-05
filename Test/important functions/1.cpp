/* WAP to calculate the subtraction of two numbers using function, [yes receive no return] */

#include <iostream>
using namespace std;

inline void sub(float num1, float num2)
{
    cout << num1 << " - " << num2 << " = " << num1 - num2;
}

int main()
{
    float num1, num2;

    cout << "Enter 2 number :: " << endl;
    cin >> num1 >> num2;

    sub(num1, num2);
    return 0;
}