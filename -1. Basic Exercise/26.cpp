/* C++ Program to Display Prime Numbers Between Two Intervals */

#include <iostream>
using namespace std;

bool is_prime(int num)
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
    int lb, ub;

    cout << "Enter a starting position :: ";
    cin >> lb;

    cout << "Enter a ending position :: ";
    cin >> ub;

    cout << "Prime numbers between " << lb << " and " << ub << " are" << endl;
    while (lb <= ub)
    {
        if (is_prime(lb))
            cout << lb << " ";
        lb += 1;
    }

    return 0;
}