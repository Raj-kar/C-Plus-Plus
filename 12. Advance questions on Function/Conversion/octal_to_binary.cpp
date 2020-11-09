#include <iostream>
using namespace std;

int octal_to_decimal(int num)
{
    int ans = 0, mul = 1;

    while (num != 0)
    {
        int rem = num % 10;
        ans += rem * mul;
        num /= 10;
        mul *= 8;
    }

    return ans;
}

int main()
{
    int octal_num;

    cout << "Enter a octal to number :: ";
    cin >> octal_num;

    int decimal = octal_to_decimal(octal_num);

    cout << "Decimal of " << octal_num << " is " << decimal << endl;

    return 0;
}