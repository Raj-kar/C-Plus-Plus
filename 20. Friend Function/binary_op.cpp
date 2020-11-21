#include<iostream>
using namespace std;

class Complex
{
    int num1, num2;

    public:
        void set_data(int n1, int n2)
        {
            num1 = n1; num2 = n2;
        }
        void show_data()
        {
            cout << "num_1 = " << num1 << " num_2 = " << num2 << endl;
        }

        friend Complex operator+(Complex obj1, Complex obj2);
};

Complex operator+(Complex obj1, Complex obj2)
{
    Complex temp;

    temp.num1 = obj1.num1 + obj2.num1;
    temp.num2 = obj1.num2 + obj2.num2;
     
    return temp;
}

int main()
{
    Complex c1, c2, c3;

    c1.set_data(3, 4);
    c2.set_data(5, 6);
    c3 = c1 + c2;  //c3 = operator+(c1, c2);
    c3.show_data();

    return 0;
}