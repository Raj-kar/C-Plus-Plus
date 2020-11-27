#include <iostream>
using namespace std;

int main()
{
    int x = 1, y = 2;

    switch (x)
    {
        case 1:
            switch (y)
            {
            case 2:
                cout << " Inside 2";
                break;

            case 3:
                cout << " Inside 3";
                break;
            }
            break;
        case 4:
            cout << " Inside 4";
            break;
        default:
            cout << " If not valid once";
    }
    return 0;
}