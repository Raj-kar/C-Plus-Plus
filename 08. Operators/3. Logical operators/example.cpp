/* Check weather a number is divisible by both 2 and 3, or divisible by only one of them !*/
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a value :: " << endl;
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << num << " is divided by both 2 and 3";
    }
    else if (num % 2 == 0)
    {
        cout << num << " is divided by only 2 ";
    }
    else if (num % 3 == 0)
    {
        cout << num << " is divided by only 3 ";
    }
    else
    {
        cout << num << " is not divided by 2 or 3 ";
    }

    return 0;
}