#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    void set_data(int, int);
    void display()
    {
        cout << "x = " << x << " and y = " << y << endl;
    }
};

void Complex::set_data(int a, int b)    /* membership lebel */
{
    x = a;
    y = b;
}

int main()
{   
    Complex c1;
    c1.set_data(3,4);
    c1.display();

    return 0;
}