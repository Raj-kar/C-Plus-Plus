#include <iostream>
using namespace std;

template <class X>
class Number
{
    X num;

public:
    Number(X x)
    {
        num = x;
    }
    Number()
    {
    }
    void set_data(X x) /* for set value */
    {
        num = x;
    }
    void show_data() /* for show value */
    {
        cout << num << endl;
    }
    void operator=(Number obj) /* return the maximum value */
    {
        if (num == obj.num)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
};

int main()
{
    Number<int> a, b, c(40), d(40); /* create three obj of class Integer */
    a.set_data(10);                 /* set value a to 10 */
    b.set_data(20);                 /* set value b to 20 */

    a = b;
    c = d;

    /* float type comapre */
    Number<float> f1(20.54), f2(10.6), f3(20.54);
    f1 = f2;
    f2 = f3;
    f3 = f1;

    return 0;
}