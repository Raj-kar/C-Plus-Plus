#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 2;
    int k;

    k = i + j + i++ + j++ + ++i + ++j;
    //  1 + 2 + 1   +  2  +  3  + 4

    // i = 3
    // j = 4

    cout << "i = " << i << " j= " << j << " k= " << k << endl;

    return 0;
}