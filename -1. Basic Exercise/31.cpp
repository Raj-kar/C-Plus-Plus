#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;

    cout << "Enter 1st number :: ";
    cin >> num1;
    cout << "Enter operator [+ - * /] :: ";
    cin >> op;
    cout << "Enter 2nd number :: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Difference between " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Multiply of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
        break;

    case '/':
        cout << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
        break;

    default:
        cout << "Wrong operator choosen. Please choose between [+ - * /]" << endl;
    }

    return 0;
}