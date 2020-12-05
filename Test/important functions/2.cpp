/* WAP to calculate the multiplication of two numbers using function, [no receive yes return] */

#include <iostream>
using namespace std;

inline float multi()
{
    float num1, num2;

    cout << "Enter 2 number :: " << endl;
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " is ";
    return num1 * num2;
}

int main()
{
    cout << multi();
    return 0;
}