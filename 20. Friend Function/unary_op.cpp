#include <iostream>
using namespace std;

class Complex
{
    int num1, num2;

public:
    void set_data(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void show_data()
    {
        cout << "num_1 = " << num1 << " num_2 = " << num2 << endl;
    }
    friend Complex operator-(Complex);
};

Complex operator-(Complex obj)
{
    Complex temp;
    temp.num1 = -obj.num1;
    temp.num2 = -obj.num2;
    return temp;
}

int main()
{   
    Complex c1, c2;
    c1.set_data(3, 4);

    c2 = -c1;
    c1.show_data();
    c2.show_data();

    return 0;
}