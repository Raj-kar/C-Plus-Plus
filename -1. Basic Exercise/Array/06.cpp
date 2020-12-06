/* Initialize and print all elements of a 2D array. */

#include <iostream>
using namespace std;

int main()
{
    int row = 3, column = 2;
    int arr2D[row][column] = {{1, 2}, {3, 4}, {5, 6}};  

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << arr2D[i][j] << " ";
        cout << endl;
    }

    return 0;
}