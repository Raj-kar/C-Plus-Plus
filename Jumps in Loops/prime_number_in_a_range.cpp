/* Print all the prime numebrs in a given range */

#include <iostream>
using namespace std;

int main()
{
    int start, end, flag;

    cout << "Enter a starting position " << endl;
    cin >> start;

    cout << "Enter a ending position " << endl;
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " -->" << endl;
    for (int i = start; i <= end; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++) // optimized, we check only half of the number
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << i << endl;
    }

    return 0;
}

/* Using Break Statement */

int main()
{
    int start, end;

    cout << "Enter a starting position " << endl;
    cin >> start;

    cout << "Enter a ending position " << endl;
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " -->" << endl;
    for (int i = start; i <= end; i++)
    {
        int j;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            cout << i << endl;
    }

    return 0;
} 