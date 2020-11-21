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
        cout << "a = " << a << " b = " << b << endl;
    }

    friend void fun(Complex c); /* declare in class, but define outside */
};

void fun(Complex c) /* no need of membership for class friend */
{
    cout << "Sum = " << c.a + c.b;
}

int main()
{
    Complex c1;
    c1.set_data(4,5);
    c1.show_data();
    fun(c1);
    
    return 0;
}