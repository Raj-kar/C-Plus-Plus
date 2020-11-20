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
    Complex operator-() /* unary operator overload */
    {
        Complex temp;

        temp.a = (a * -1);
        temp.b = (b * -1);
        return temp;
    }
};

int main()
{
    Complex c1, c2;

    c1.set_data(5, 4);
    // c2 = c1.operator-();
    c2 = -c1;

    c2.show_data();
    
    return 0;
}