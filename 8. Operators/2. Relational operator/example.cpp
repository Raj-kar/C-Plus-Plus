/* weather a value is less then or more than 10 */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a value " << endl;
    cin >> num;

    if (num > 10)
    {
        cout << num << " is greater than 10";
    }
    else if (num < 10)
    {
        cout << num << " is less than 10";
    }
    else
    {
        cout << num << " is equal to 10";
    }

    return 0;
}