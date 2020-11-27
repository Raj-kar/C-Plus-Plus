#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter row number : ";
    cin >> row;

    cout << "Enter column number : ";
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
Enter row number : 6
Enter column number : 12
************
************
************
************
************
************
*/