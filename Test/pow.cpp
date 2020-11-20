#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num = 5;

    while (num != 0)
    {
        int rem = num % 10;
        cout << "Rem = " << rem << endl;
        float power = pow(rem, 3);
        cout << " power = " << power << endl;
        num /= 10;
    }
    return 0;
}