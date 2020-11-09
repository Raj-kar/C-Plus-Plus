#include <iostream>
using namespace std;

int binary_to_decimal(int num)
{
    int ans = 0, mul = 1;

    while (num != 0)
    {
        int rem = num % 10;
        ans += rem * mul;
        num /= 10;
        mul *= 2;
    }

    return ans;
}

int main()
{
    int binary_num;

    cout << "Enter a binary to number :: ";
    cin >> binary_num;

    int decimal = binary_to_decimal(binary_num);

    cout << "Decimal of " << binary_num << " is " << decimal << endl;

    return 0;
}