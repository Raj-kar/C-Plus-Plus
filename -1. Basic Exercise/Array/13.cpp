/* Write a C++ program to find the most occurring element in an array of
integers. */

#include <iostream>
using namespace std;

int main()
{
    int arr[ ] = {2, 1, 4, 2, 1, 3, 5, 1, 2, 4, 2, 7}, n = 12, most = 0, final_num;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int occur = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (num == arr[j])
            {
                occur += 1;
            }
        }
        if (occur > most)
        {
            most = occur;
            final_num = num;
        }
    }

    cout << "Most occur number = " << final_num;

    return 0;
}