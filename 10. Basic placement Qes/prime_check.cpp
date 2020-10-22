#include <iostream>
using namespace std;

int main()
{
    int num, flag = 0;

    cout << "Enter a number to check prime or not :: ";
    cin >> num;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    flag == 1 ? cout << num << " is not a prime number " << endl : cout << num << " is a prime number " << endl;
    return 0;
}