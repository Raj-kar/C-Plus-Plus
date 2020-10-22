#include <iostream>
using namespace std;

int main()
{
    // amstrong num = 153 = 1^3 + 5^3 + 3^3 = 153;
    int num, sum = 0, temp, rem;

    cout << "Enter a number :: ";
    cin >> num;
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }
    num == sum ? cout << num << " is a amstrong number "
               : cout << num << " is not a amstrong number ";
    return 0;
}