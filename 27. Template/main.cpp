#include <iostream>
using namespace std;

/* template means a form [like a bank form ] */
template <class X> // automatically detect received and return type
X add(X a, X b)
{
    return a + b;
}

template <class X>
X _max(X a, X b) /* in c++ max is a pre-defined func, so we added a underscore at first */
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Sum of 5 and 5 is = " << add(5, 5) << endl;
    cout << "Sum of 5.2 and 5.3 is = " << add(5.2, 5.3) << endl;
    cout << "Max between 5 and 10 is = " << _max(5, 10) << endl;
    cout << "Max between 5.4 and 5.3 is = " << _max(5.4, 5.3) << endl;
    return 0;
}