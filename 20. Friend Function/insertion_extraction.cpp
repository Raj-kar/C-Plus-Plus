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
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex);
};

istream &operator>>(istream &cin, Complex &C)
{
    cin >> C.num1 >> C.num2;
    return cin;
}

ostream &operator<<(ostream &cout, Complex C)
{
    cout << "num_1 = " << C.num1 << " num_2 = " << C.num2 << endl;
    return cout;
}

int main()
{
    Complex c1;

    cout << "Enter a Complex number :: " << endl;
    cin >> c1;

    cout << c1;

    return 0;
}