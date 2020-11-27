#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 2, k = 3;

    int m = i-- - j-- - k--;

    cout << " i = " << i << endl;
    cout << " j = " << j << endl;
    cout << " k = " << k << endl;
    cout << " m = " << m << endl;

    return 0;
}

/*
    i = 0 j = 1 k = 2 m = -4
*/
