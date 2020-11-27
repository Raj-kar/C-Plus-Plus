#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // the loop will run, atleast one time !
    do
    {
        cout << num << endl;
        cin >> num;
    } while (num > -1);

    return 0;
}