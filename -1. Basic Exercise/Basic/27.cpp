/* C++ Program to Check Armstrong Number */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int len = 0, NUM, rem, num;
    float sum = 0.0;

    cout << "Enter a number :: " << endl;
    cin >> num;

    for (NUM = num; NUM != 0; len++) // count the len
    {
        NUM /= 10;
    }
    NUM = num;

    while (NUM != 0)
    {
        rem = NUM % 10;
        sum += pow(rem, len);
        NUM /= 10;
    }

    if (sum == num)
        cout << num << " is a amstrong number . " << endl;
    else
        cout << num << " is not a amstrong number . " << endl;

    return 0;
}