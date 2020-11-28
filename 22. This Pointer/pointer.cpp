#include <iostream>
using namespace std;

class Box
{
    int l, b, h;

public:
    void setDimension(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
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