#include <iostream>
using namespace std;

int sum_of_n_natural(int num)
{
    return (num * (num + 1)) / 2;
}

int32_t main()
{
    int range, result;

    cout << "Enter last natural number :: ";
    cin >> range;

    result = sum_of_n_natural(range);

    cout << "Sum of n natural numbers from 1 to " << range << " is " << result;

    return 0;
}