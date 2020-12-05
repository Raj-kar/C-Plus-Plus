/* Write a program to find the sum and product of all elements of an array. */
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, sum = 0, pro = 1;

    cout << "Enter a range :: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        pro *= arr[i];
    }

    cout << "Sum = " << sum << " and product = " << pro << endl;

    return 0;
}