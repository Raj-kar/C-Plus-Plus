#include <iostream>
using namespace std;

int main()
{
    int row, space;

    cout << "Enter number of row :: ";
    cin >> row;
    space = (row * 2) - 2;

    for (int i = 1; i <= row; i++)
    {
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        space -= 2;
        
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        for (int l = 2; l <= i; l++)
        {
            cout << l << " ";
        }
        
        cout << endl;
    }
    return 0;
}