/* C++ Program to Display Armstrong Number Between Two Intervals */

#include <iostream>
#include <string.h>
using namespace std;

int power(int base, int expo)
{
    int res = 1;

    for (int i = 1; i <= expo; i++)
        res *= base;
    return res;
}

void amstrong(int num)
{
    string str_num = to_string(num);
    int len, NUM = num, rem, sum = 0;

    len = str_num.size();

    while (num != 0)
    {
        rem = num % 10;
        sum += power(rem, len);
        num /= 10;
    }

    if (sum == NUM)
        cout << NUM << " ";
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