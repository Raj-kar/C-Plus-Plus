/*  C++ Program to Swap Two Numbers */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers :: " << endl;
    cin >> num1 >> num2;

    cout << "Before swap the values are " << num1 << " " << num2 << endl;

    int num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << "After swap the values are " << num1 << " " << num2 << endl;

    return 0;
}