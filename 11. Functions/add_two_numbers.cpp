#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;

    cout << "Enter number 1 :: ";
    cin >> num1;

    cout << "Enter number 2 :: ";
    cin >> num2;

    cout << "sum of " << num1 << " and " << num2 << " is " << add(num1, num2);

    return 0;
}