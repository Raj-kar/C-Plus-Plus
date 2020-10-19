#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number of row : " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j == i or j == num - i - 1)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

Enter number of row :
7
1 0 0 0 0 0 1
0 1 0 0 0 1 0
0 0 1 0 1 0 0
0 0 0 1 0 0 0
0 0 1 0 1 0 0
0 1 0 0 0 1 0
1 0 0 0 0 0 1

*/