#include <iostream>
using namespace std;

class Box
{
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    { /* this holds the caller obj address */
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void showDimension()
    {
        cout << "Length = " << l << " Breadth = " << b << " Height = " << h << endl;
    }
};

int main()
{
    Box smallBox, *p;
    p = &smallBox;

    p->setDimension(12, 4, 5);
    p->showDimension();

    return 0;
} 