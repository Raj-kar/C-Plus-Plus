#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number :: " << endl;
    cin >> num1;

    cout << "Enter opeator [ + | - | * | / ] " << endl;
    cin >> op;

    cout << "Enter second number :: " << endl;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Substraction from " << num1 << " to " << num2 << " is " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
        break;

    case '/':
        cout << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
        break;

    default:
        cout << "Choose a operator wisely" << endl;
        main(); // again call the main function !
        break;
    }
    return 0;
}