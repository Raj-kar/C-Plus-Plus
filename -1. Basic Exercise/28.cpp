/* C++ Program to Display Armstrong Number Between Two Intervals */

#include <iostream>
#include <math.h>
using namespace std;

void amstrong(int num)
{
    int len = 0, NUM, rem;
    float sum = 0.0;

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
        cout << num << " ";
}

int main()
{
    int start, end;

    cout << "Enter a starting and ending point " << endl;
    cin >> start >> end;

    cout << "Amstrong numbers between " << start << " and " << end << " are = " << endl;
    for (int i = start; i <= end; i++)
        amstrong(i);
}