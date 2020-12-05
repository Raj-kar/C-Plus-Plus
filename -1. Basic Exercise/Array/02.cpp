/* Take 10 integer inputs from the user and store them in an array. Again
ask the user to give a number. Now, tell the user whether that number is
present in the array or not. */

#include <iostream>
using namespace std;

bool is_present(int arr[], int val)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == val)
        {
            cout << val << " found on index position " << i + 1 << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10], search_val;

    cout << "Enter 10 int elements :: " << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter a int value for search = " << endl;
    cin >> search_val;

    if (!is_present(arr, search_val))
        cout << "Value not found in the arr " << endl;

        return 0;
}
