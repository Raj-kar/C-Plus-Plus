#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, sum = 0;
    float avg;

    cout << "Enter range ::" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elemnents = " << sum << endl;
    cout << "Avarage of array elements = " << float(sum) / float(n) << endl;

    return 0;
}