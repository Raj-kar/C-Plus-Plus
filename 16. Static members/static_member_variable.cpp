#include <iostream>
using namespace std;

class Account
{
    int balance;      // Instance member variable
    static float roi; // Static member variable / class var

public:
    void set_balance(int b)
    {
        balance = b;
    }

    static void set_roi(float r)    /* STATIC MEMBER FUNCTION / CLASS FUNCTION */
    {
        roi = r;
    }

    void show_balance()
    {
        cout << "Your current account balance is = " << balance << endl;
    }

    static void show_roi()
    {
        cout << "Your current account rate of interest is = " << roi << endl;
    }
};

float Account::roi = 3.5f; /* create roi var, and get memory.. not depend on object */
/* no matter how many object you create, the roi var will create only once */
int main()
{
    Account a1;
    a1.set_balance(200);
    a1.show_balance();

    a1.show_roi();

    Account::set_roi(4.5F); /* CAN USE EVEN THERE IS NO OBJECT OR WITH OBJECT */
        /* SCOPE RESOLUTION OPERATOR [::] */

    Account::show_roi();

    return 0;
}