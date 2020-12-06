/* Find the largest and smallest elements of an array. */

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n;

    cout << "Enter range :: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int small = arr[0], large = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
        else if (arr[i] > large)
            large = arr[i];
    }
    cout << "smallest element = " << small << endl;
    cout << "largest element = " << large << endl;

    return 0;
}