/* Take 20 integer inputs from the user and print the following:
○ number of positive numbers
○ number of negative numbers
○ number of odd numbers
○ number of even numbers
○ Number of zeros(0). */

#include <iostream>
using namespace std;

int main()
{
    int arr1[6], pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    cout << "Enter 20 values " << endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr1[i];
        if (arr1[i] == 0)
            zero += 1;
        else if (arr1[i] <= 0)
            neg += 1;
        else
        {
            pos += 1;
            if (arr1[i] % 2 == 0)
                even += 1;
            else
                odd += 1;
        }
    }
    cout << "number of positive numbers " << pos << endl;
    cout << "number of negative numbers " << neg << endl;
    cout << "number of odd numbers " << odd << endl;
    cout << "number of even numbers " << even << endl;
    cout << "Number of zeros(0) " << zero << endl;

    return 0;
}
