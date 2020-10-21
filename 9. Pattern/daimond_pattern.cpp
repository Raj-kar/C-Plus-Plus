#include <iostream>
using namespace std;

int main()
{
    int row, space;

    cout << "Enter number of row :: ";
    cin >> row;
    space = (row * 2) - 2;

    for (int i = 0; i < (row * 2); i += 2)
    {
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        space -= 2;

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    for (int i = (row * 2) - 1; i > 0; i -= 2)
    {
        for (int k = (row * 2) - 1; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
            * 
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
  * * * * * * * * * * *
* * * * * * * * * * * * *
* * * * * * * * * * * * *
  * * * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *   
*/