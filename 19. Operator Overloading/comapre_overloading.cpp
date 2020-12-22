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
    Integer operator>(Integer obj) /* return the maximum value */
    {
        Integer temp;

        if (num > obj.num)
            temp.num = num;
        else
            temp.num = obj.num;
        return temp;
    }
    Integer operator<(Integer obj) /* return the minimum value */
    {
        Integer temp;

        if (num < obj.num)
            temp.num = num;
        else
            temp.num = obj.num;
        return temp;
    }
};

int main()
{
    Integer a, b, c; /* create three obj of class Integer */
    a.set_data(10);  /* set value a to 10 */
    b.set_data(20);  /* set value b to 20 */

    c = a > b; /* compare between a AND b, and the max value will store to c*/
    cout << "Max value between a and b is ";
    c.show_data();

    c = a < b; /* compare between a AND b, and the min value will store to c*/
    cout << "Min value between a and b is ";
    c.show_data();

    return 0;
}