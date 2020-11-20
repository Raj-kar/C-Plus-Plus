#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        cout << "Object created .. !" << endl;
    }

    ~Complex() /* Destructing symbol is ~ , it wil execute when the obj will destroyed */
    {
        cout << "The obj is destroyed " << endl;
    }
};

void fun()
{
    cout << "Fun is called, now it'll create one obj of Complex ..!" << endl;

    Complex c1;
}

int main()
{
    cout << "Main program execution started !" << endl;
    fun();
    cout << "Again Return to main program  " << endl;
    return 0;
}