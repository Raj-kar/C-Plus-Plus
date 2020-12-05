/* Take 10 integer inputs from the user and store them in an array and print
them on screen. */

#include<iostream>
using namespace std;

int main()
{   
    int arr[10];

    cout << "Enter 10 int elements :: " << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Your 10 int elements are :: " << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}
