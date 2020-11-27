#include <iostream>
using namespace std;

int main()
{
    int row, space;

    cout << "Enter row numbers : ";
    cin >> row;
    space = row - 1;

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        space -= 1;

        for (int j = 0; j < row; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
         * * * * * * * * * *
        * * * * * * * * * *
       * * * * * * * * * *
      * * * * * * * * * *
     * * * * * * * * * *
    * * * * * * * * * *
   * * * * * * * * * *
  * * * * * * * * * *
 * * * * * * * * * *
* * * * * * * * * *
*/