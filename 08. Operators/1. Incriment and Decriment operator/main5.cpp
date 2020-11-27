#include <iostream>
using namespace std;

int main()
{
    int i = 10, j = 20, k;

    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    //  10  - 9   +  19 -  20 +  9  - 20  +  10 - 19   =   -20

    // i = 10
    // j = 20

    cout << " i = " << i << endl;
    cout << " j = " << j << endl;
    cout << " k = " << k << endl;

    return 0;
}

/*
 i = 10
 j = 20
 k = -20
*/