#include <iostream>
using namespace std;

template <class X>
class op
{
    X a, b;

public:
    void get()
    {
        cout << "Enter 2 numbers :: " << endl;
        cin >> a >> b;
    }
    void add()
    {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void sub()
    {
        cout << "Substraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void mul()
    {
        cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void div()
    {
        cout << "Division of " << a << " and " << b << " is " << a / b << endl;
    }
};

int main()
{
    op <float>o1;
    o1.get();
    o1.add();
    o1.sub();
    o1.mul();
    o1.div();

    return 0;
}