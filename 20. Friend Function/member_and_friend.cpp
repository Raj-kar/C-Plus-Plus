/* If you want to make Class A, member function, Class B friend function */

#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Class A - Fun Func. " << endl;
    }
    void foo()
    {
        cout << "Class A - Foo Func. " << endl;
    }
};

class B
{
    /* friend void A::fun();
    friend void A::foo(); */
    // if you need, all A class function as friend func. of B class, use this -->
    friend class A;
};

int main()
{
    A num1;
    B num2;

    num1.fun();

    return 0;
}