#include <iostream>
using namespace std;

int main()
{
    int row, count = 1;

    cout << "Enter number of row : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if ((i + j) % 2 == 0) // if row + column = even number, then print 1
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}