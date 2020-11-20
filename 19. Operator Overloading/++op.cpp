#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    void set_data(int a)
    {
        x = a;
    }

    void show_data()
    {
        cout << " x = " << x << endl;
    }

    Integer operator++() /* pre-incriment */
    {
        Integer i;
        i.x = ++x;
        return i;
    }

    Integer operator++(int) /* post-incriment [use int just for defarancite from pre-incriment]  */
    {
        Integer i;
        i.x = x++;
        return i;
    }

    Integer operator--() /* pre-decriment */
    {
        Integer i;
        i.x = --x;
        return i;
    }

    Integer operator--(int) /* post-decriment */
    {
        Integer i;
        i.x = x--;
        return i;
    }
};

int main()
{
    Integer i1, i2;

    i1.set_data(3);
    i1.show_data();
    i2 = ++i1;
    cout << endl;

    i1.show_data();
    i2.show_data();
    cout << endl;

    i2 = i1++;
    i1.show_data();
    i2.show_data();
    cout << endl;

    i2 = --i1;
    i1.show_data();
    i2.show_data();

    cout << endl;
    i2 = i1--;
    i1.show_data();
    i2.show_data();

    return 0;
}