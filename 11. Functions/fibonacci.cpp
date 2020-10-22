#include <iostream>
using namespace std;

void fibo(int n)
{
    int a = 0, b = 1;

    cout << a << " " << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
}

int main()
{
    int n;

    cout << "Enter sequence range :: ";
    cin >> n;
    fibo(n);

    return 0;
}