#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter row number " << endl;
    cin >> row;
    column = (row * 2) + 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j == i or j == column - i - 1 or j == column / 2)
                cout << "*"
                     << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

Enter row number
5
* 0 0 0 0 * 0 0 0 0 *
0 * 0 0 0 * 0 0 0 * 0
0 0 * 0 0 * 0 0 * 0 0
0 0 0 * 0 * 0 * 0 0 0
0 0 0 0 * * * 0 0 0 0

*/