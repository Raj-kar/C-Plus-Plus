#include <iostream>
using namespace std;

class Complex
{
    int x, y; /* instance member variable, mean object variable */

public:
    void set_data(int a, int b) /* instance member functions */
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x = " << x << " and y = " << y << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.x = x - c.x;
        temp.y = y - c.y;
        return temp;
    }
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.x = x * c.x;
        temp.y = y * c.y;
        return temp;
    }
    Complex division(Complex c)
    {
        Complex temp;
        temp.x = x / c.x;
        temp.y = y / c.y;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(4, 3);

    c3 = c1.add(c2);
    c3.display(); // x = 7 and y = 7

    c3 = c1.subtract(c2);
    c3.display(); // x = -1 and y = 1

    c3 = c1.multiply(c2);
    c3.display(); // x = 12 and y = 12

    c3 = c1.division(c2);
    c3.display(); // x = 0 and y = 1

    return 0;
}