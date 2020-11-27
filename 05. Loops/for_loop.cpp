/* Sum of N numbers */

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    // initialised sum with 0, otherwise it'll assigned a random value !

    cout << "Enter a range : \n";
    cin >> num;

    for (int counter = 1; counter <= num; counter++)
    {
        sum += counter;
    }

    cout << "Sum of " << num << " numbers is " << sum << endl;

    return 0;
}