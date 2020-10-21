#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter row number : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}