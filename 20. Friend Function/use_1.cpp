/* A class can be friend of more than one classes */

#include <iostream>
using namespace std;

class B; /* protype declaration */
class A
{
    int a;

public:
    A(int val)
    {
        a = val;
    }
    friend void sum(A, B);
};

class B
{
    int b;

public:
    B(int val)
    {
        b = val;
    }
    friend void sum(A, B);
};

void sum(A val1, B val2) /* sum of class A obj and class B obj */
{
    cout << "Sum = " << val1.a + val2.b << endl;
}

int main()
{
    A obj1(10);
    B obj2(20);
    sum(obj1, obj2);

    return 0;
}