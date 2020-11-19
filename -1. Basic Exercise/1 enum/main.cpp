/* enum or Enumerated type */

#include <iostream>
using namespace std;

enum Week
{
    sun,
    mon,
    tue,
    wed,
    thur,
    sat
};

int main()
{
    Week today;

    today = wed;

    cout << "Day = " << today + 1;

    return 0;
}

/* output --> 4 */