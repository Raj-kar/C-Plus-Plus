#include<iostream>
using namespace std;

void fact(int n);
int main()
{
    int n;

    cout << "Enter a number :: " << endl;
    cin >> n;

    fact(n);

    return 0;
}

void fact(int n)
{
    static int count = 1;
    start:
        if(n % count == 0)
            cout << count << " ";
        count += 1;
    goto start;
}