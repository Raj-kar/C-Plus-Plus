#include <iostream>
using namespace std;

int main()
{
    int row, column, i, j;
    char symbol;

    cout << "Enter row number : ";
    cin >> row;

    cout << "Enter column number : ";
    cin >> column;

    cout << "Enter your symbol : ";
    cin >> symbol;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (i == 0 or i == row - 1 or j == 0 or j == column - 1)
            {
                cout << symbol;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}