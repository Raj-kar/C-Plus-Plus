#include <bits/stdc++.h>
using namespace std;

int hexaDeciaml_to_Decimal(string num)
{
    int answer = 0, mul = 1;
    int str_size = num.size();

    for (int i = str_size - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            answer += mul * (num[i] - '0');
        }
        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            answer += mul * (num[i] - 'A' + 10);
        }
        mul *= 16;
    }
    return answer;
}

int main()
{
    string num;

    cout << "Enter a hexa_decimal number :: ";
    cin >> num;

    int decimal = hexaDeciaml_to_Decimal(num);

    cout << "Decimal of " << num << " is " << decimal << endl;

    return 0;
}