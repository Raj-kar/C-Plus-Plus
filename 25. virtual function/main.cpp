#include <iostream>
using namespace std;

class Car
{
    int gear = 0;

public:
    virtual void gearUp()
    {
        gear += 1;
        cout << "Gear = " << gear << endl;
    }
};

class SportsCar : public Car
{
    int gear = 0;

public:
    // No need to use virtual here, but you can use it !
    void gearUp() // Method overidding
    {
        gear += 5;
        cout << "Gear = " << gear << endl;
    }
};

int main()
{
    Car c1, *p;
    SportsCar c2;

    p = &c2;     // parent pointer can hold child address, but child pointer can't hold parent addresses !
    p->gearUp(); /* here p is pointer of class Car, but points to SportsCar obj, so compiler will * early bind *
                    Car class gearUp() method. so we have to use virtual function. so it'll called gearUp() method 
                    of SportsCar obj, during runtime !    */

    return 0;
}