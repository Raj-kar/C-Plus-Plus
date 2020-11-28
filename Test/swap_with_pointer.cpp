#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << a << " " << b;
}