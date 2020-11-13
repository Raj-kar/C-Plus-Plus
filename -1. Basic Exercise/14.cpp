#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number to create multiplication table " << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}