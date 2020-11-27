#include <iostream>
using namespace std;

int main()
{
    int column;

    cout << "Enter column number [9]:: ";
    cin >> column;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j == 4 - i or j == 2 + i or j == 8 - i or j == 6 + i)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*

    *       *
  *   *   *   *
*       *       *

*/