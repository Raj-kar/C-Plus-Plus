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

    friend void fun();
};

void fun()
{
    cout << "FUN Func. called ! " << endl;
}

int main()
{
    Complex c1;
    c1.show_data();

    return 0;
    
}