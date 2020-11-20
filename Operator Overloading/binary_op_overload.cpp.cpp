#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << endl
             << " a = " << a << " and b = " << b << endl;
    }
    Complex operator +(Complex c)
    {
        Complex temp;

        temp.a = c.a + a;
        temp.b = c.b + b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.set_data(5, 4);
    c2.set_data(4, 9);
    c3 = c2 + c1;
    // or, c3 = c2.operator+(c1);
    c3.show_data();

    return 0;
}