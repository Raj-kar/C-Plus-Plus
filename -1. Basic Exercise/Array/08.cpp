/* Write a program to check if elements of an array are the same or not
it read from front or back. */

#include <iostream>
using namespace std;

bool reverse(int arr[], int size)
{
    int reverse_arr[size], count = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        reverse_arr[count] = arr[i];
        count += 1;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != reverse_arr[i])
            return false;
    }
    return true;
}

int main()
{
    int arr[10], range;

    cout << "Enter range :: " << endl;
    cin >> range;

    cout << "Enter " << range << " elements :: " << endl;
    for (int i = 0; i < range; i++)
        cin >> arr[i];

    if (reverse(arr, range))
        cout << "Palindrome array " << endl;
    else
        cout << "Not a Palindrome array " << endl;

    return 0;
}
