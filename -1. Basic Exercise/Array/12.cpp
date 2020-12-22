/* Write a C++ program to find the second largest element in a given array
of integers. */

#include <iostream>
using namespace std;

void sorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[20], n;

    cout << "Enter a range :: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sorted(arr, n);

    int largest = arr[0], second;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {

            second = largest;
            largest = arr[i];
        }
    }

    cout << "Second largest number = " << second << endl;

    return 0;
}