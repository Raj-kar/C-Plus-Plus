/* Write a program to print sum, average of all numbers, smallest and
largest element of an array. */

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n;

    cout << "Enter a range :: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int small = arr[0], large = arr[0], sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
        else if (arr[i] > large)
            large = arr[i];

        sum += arr[i];
    }
    cout << "sum = " << sum << endl;
    cout << "smallest element = " << small << endl;
    cout << "largest element = " << large << endl;
    cout << "Average  = " << (float(sum) / float(n)) << endl;

    return 0;
}
