/* Take input unless user enter a negative number ! */

#include <iostream>
using namespace std;

int main()
{
    int input;

    while (true)
    {
        cout << "Enter a negative number for stop : " << endl;
        cin >> input;

        if (input < 0)
        {
            break;
        }
    }
}