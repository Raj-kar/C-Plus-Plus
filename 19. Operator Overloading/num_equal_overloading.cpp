#include <iostream>
using namespace std;

class Integer
{
    int num;

public:
    Integer(int x) /* constructor */
    {
        num = x;
    }
    Integer() /* default constructor */
    {
    }
    void set_data(int x) /* for set value */
    {
        num = x;
    }
    void show_data() /* for show value */
    {
        cout << num << endl;
    }
    void operator=(Integer obj) /* return the maximum value */
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
    Integer a, b, c(40), d(40); /* create three obj of class Integer */
    a.set_data(10);             /* set value a to 10 */
    b.set_data(20);             /* set value b to 20 */

    a = b; /* false */
    c = d; /* true */

    return 0;
}