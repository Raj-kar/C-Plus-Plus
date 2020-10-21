#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter number of rows : ";
    cin >> row;
    column = row * 2;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j <= i or j >= (column + 1) - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j <= (row + 1)-i or j >= row + i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}