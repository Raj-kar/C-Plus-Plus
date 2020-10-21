#include <iostream>
using namespace std;

int main()
{
    int n, space;

    cout << "Enter number of row :: ";
    cin >> n;
    space = n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < space - 1; k++)
        {
            cout << " " << " ";
        }
        space -= 1;

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

       *
      * *
    * * *
  * * * *
* * * * *

*/