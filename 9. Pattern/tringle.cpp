#include <iostream>
using namespace std;

int main()
{
    int count = 0, space, row;

    cout << "Enter row number " << endl;
    cin >> row;
    space = row - 1;

    for (int i = 1; i < row * 2; i += 2)
    {
        for (int k = 0; k < space; k++)
            cout << " ";
        space -= 1;
        for (int j = 1; j <= i; j++)
        {
            if (count % 2 == 0)
                cout << 1;
            else
                cout << 0;
            count += 1;
        }
        cout << endl;
    }

    return 0;
}

/*

Enter row number
10
         1
        010
       10101
      0101010
     101010101
    01010101010
   1010101010101
  010101010101010
 10101010101010101
0101010101010101010

*/