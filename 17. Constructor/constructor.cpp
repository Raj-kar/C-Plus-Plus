#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // parameterized constructor
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
    }
    Complex()
    {
        a = 0, b = 0;
    }
    Complex(Complex &c) /* create refarance var, for no error */
    {
        cout << "call copy constructor " << endl;
        a = c.a;
        b = c.b;
    }
};

int main()
{
    /* Complex c1 = Complex(3,4), c2 = 4, c3;  [both statement is same] */
    Complex c1(3, 4), c2(4), c3;
    Complex c4(c1);

    return 0;
