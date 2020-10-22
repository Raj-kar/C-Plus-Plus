#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;

    cout << "Enter the value of n :: ";
    cin >> n;

    cout << "Enter the value of r :: ";
    cin >> r;

    int ncr = fact(n) / (fact(n-r) * fact(r));

    cout << "NCR of " << n << " and " << r << " is " << ncr;
} 