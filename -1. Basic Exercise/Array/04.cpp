/* Take 10 integer inputs from the user and store them in an array. Now,
copy all the elements in another array but in reverse order. */

#include <iostream>
using namespace std;

/* for test */
void print_values(int arr[])
{
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr1[10];

    cout << "Enter 10 elements :: " << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr1[i];

    int arr2[10], count = 0;

    for (int i = 9; i >= 0; i--)
    {
        arr2[i] = arr1[count];
        count++;
    }
    cout << "Values on array 1 = ";
    print_values(arr1);
    cout << "After reverse and store on array 2 = ";
    print_values(arr2);

    return 0;
}