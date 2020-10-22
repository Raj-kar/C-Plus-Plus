#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num;

    cout << "Enter a number to find fact :: ";
    cin >> num;

    cout << "Factorial of" << num << " is " << fact(num);

    return 0;
}