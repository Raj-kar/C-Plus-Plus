#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void _show()
    {
        cout << "a = " << a << endl;
    }
};

class B : private A
{
    int b;

public:
    B(int x, int y):A(x)
    {
        b = y;
    }
    void show()
    {
        _show();
        cout << "b = " << b << endl;
    }
};

int main()
{
    B obj1(4,5);

    obj1.show();

    return 0;
}