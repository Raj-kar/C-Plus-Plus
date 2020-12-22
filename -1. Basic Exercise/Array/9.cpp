/* Take an array of 10 elements. Split it into the middle and store the
elements in two different arrays. */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

inline void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr1[10], arr2[5], arr3[5];
    srand(time(0));

    /* store 10 values in the main array */
    for (int i = 0; i < 10; i++)
        arr1[i] = (rand() % 100);

    /* split from middle and store 5 values in arr2 */
    for (int i = 0; i < 5; i++)
        arr2[i] = arr1[i];

    /* split from middle and store last 5 values in arr3 */
    for (int i = 0, count = 5; i < 5; i++, count++)
        arr3[i] = arr1[count];

    cout << "Main array= " << endl;
    print_arr(arr1, 10);
    cout << "array 1 = " << endl;
    print_arr(arr2, 5);
    cout << "array 2 = " << endl;
    print_arr(arr3, 5);

    return 0;
}
