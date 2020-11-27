#include <iostream>
using namespace std;

class complex
{
    int num1, num2;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void displayData()
    {
        cout << "num_1 = " << num1 << " num_2 = " << num2 << endl;
    }
    complex operator+(complex obj)
    {
        complex temp;
        temp.num1 = obj.num1 + num1;
        temp.num2 = obj.num2 + num2;
        return temp;
    }
    friend complex operator-(complex obj1, complex obj2);
    friend complex operator*(complex obj1, complex obj2);
    friend complex operator/(complex obj1, complex obj2);
};

complex operator-(complex obj1, complex obj2)
{
    complex temp;
    temp.num1 = obj1.num1 - obj2.num1;
    temp.num2 = obj1.num2 - obj2.num2;
    return temp;
}

complex operator*(complex obj1, complex obj2)
{
    complex temp;
    temp.num1 = obj1.num1 * obj2.num1;
    temp.num2 = obj1.num2 * obj2.num2;
    return temp;
}

complex operator/(complex obj1, complex obj2)
{
    complex temp;
    temp.num1 = obj1.num1 / obj2.num1;
    temp.num2 = obj1.num2 / obj2.num2;
    return temp;
}

int main()
{
    complex c1, c2, c3;

    c1.setData(10, 20);
    c2.setData(20, 15);

    c3 = c1 + c2;
    c3.displayData();

    c3 = c1 - c2;
    c3.displayData();

    c3 = c1 * c2;
    c3.displayData();

    c3 = c1 / c2;
    c3.displayData();

    return 0;
}