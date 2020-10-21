#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter row number : ";
    cin >> row;

    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/