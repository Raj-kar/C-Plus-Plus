#include<iostream>
using namespace std;

int main()
{
    int row, space;

    cout << "Enter number of row :: ";
    cin >> row;
    space = row - 1;

    for (int i = 1; i <= row; i++)
    {
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        space -= 1;

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
         1
        1 2
       1 2 3
      1 2 3 4
     1 2 3 4 5
    1 2 3 4 5 6
   1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8
 1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
*/