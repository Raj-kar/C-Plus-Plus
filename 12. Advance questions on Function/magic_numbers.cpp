/*
199 is a magic number as 1+9+9=19 but 19 is not a single
digit number so 1+9=10 and then 1+0=1 which is a single
digit number and also 1. Hence it is a magic number. */

#include <iostream>
using namespace std;

int magic_sum(int num)
{
    int sum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}

void create_magic(int num)
{
    int count = 0, temp = num;

    while (num != 1)
    {
        num = magic_sum(num);
        count += 1;
        if (count > 2)
            break;
    }

    if (num == 1)
        cout << temp << " ";
}

int main()
{
    int start, end;

    cout << "Enter a starting and ending point :: " << endl;
    cin >> start >> end;

    cout << "Magic numbers between " << start << " and " << end << " are :: " << endl;
    for (int i = start; i <= end; i++)
    {
        create_magic(i);
    }

    return 0;
}