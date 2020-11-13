#include <iostream>
using namespace std;

int fibo(int num);
int main()
{
    int num;

    cout << "Enter a range :: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
        cout << fibo(i) << " ";

    return 0;
}

int fibo(int num)
{
    if (num <= 2)
        return 1;
    else
        return (fibo(num - 2) + fibo(num - 1));
}