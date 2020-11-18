#include <iostream>
using namespace std;

bool prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;

    cout << "Enter a number :: " << endl;
    cin >> num;

    if (prime(num))
        cout << num << " is a prime number . " << endl;
    else
        cout << num << " is not a prime number . " << endl;

    return 0;
}
