/* Skip all the numbers that'll divisible by 3, in a range of 1 to 100 */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << "current num = " << i << endl;
    }

    return 0;
}