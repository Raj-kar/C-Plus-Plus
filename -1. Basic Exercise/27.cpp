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

int main()
{
    char num[20];
    int len, NUM, rem, sum = 0;

    cout << "Enter a number :: " << endl;
    gets(num);
    NUM = atoi(num);

    len = strlen(num);

    while (NUM != 0)
    {
        rem = NUM % 10;
        sum += power(rem, len);
        NUM /= 10;
    }
    
    if (sum == atoi(num))
        cout << atoi(num) << " is a amstrong number . " << endl;
    else
        cout << atoi(num) << " is not a amstrong number . " << endl;

    return 0;
}