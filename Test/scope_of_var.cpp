#include <iostream>
using namespace std;

int x = 50;

int main()
{
    int x = 10;

    cout << ::x;
    cout << x;
}