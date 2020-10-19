/* Check if a number is prime or not !  */

#include <iostream>
using namespace std;

int main()
{
    int num, flag = 0; // if divided by any number, we make flag = 1

    cout << "Enter a number for check prime or not : " << endl;
    cin >> num;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << num << " is prime" << endl;
    else
        cout << num << " is not prime" << endl;

    return 0;
}