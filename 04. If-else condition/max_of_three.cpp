/* Find Maximum of three given numbers */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter Three numbers \t";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 and num1 > num3)
    {
        cout << num1 << " is Maximum";
    }
    else if (num2 > num1 and num2 > num3)
    {
        cout << num2 << " is Maximum";
    }
    else
    {
        cout << num3 << " is Maximum";
    }

    return 0;
}