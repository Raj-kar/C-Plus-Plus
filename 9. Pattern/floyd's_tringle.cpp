#include <iostream>
using namespace std;

int main()
{
    int row, num = 1;

    cout << "Enter row number : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = -1; j < i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/