/* WAP to program to print from 1 to user given range */

#include <iostream>
using namespace std;

int main()
{
    int range;

    cout << "Enter a end position : " << endl;
    cin >> range;

    for (int counter = 1; counter <= range; counter++)
    {
        cout << "Print number " << counter << endl;
    }

    return 0;
}