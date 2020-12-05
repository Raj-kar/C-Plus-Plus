/* WAP to calculate the modulation of two numbers using function, [no receive no return] */

#include <iostream>
using namespace std;

inline void mod()
{
    int num1, num2;

    cout << "Enter 2 number :: " << endl;
    cin >> num1 >> num2;

    cout << num1 << " % " << num2 << " = " << (num1 % num2);
}

int main()
{
    mod();
}