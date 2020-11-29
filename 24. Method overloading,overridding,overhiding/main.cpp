#include <iostream>
using namespace std;

class Car
{
    int gear = 0;

public:
    void print_gear()
    {
        cout << "Gear on = " << gear << endl;
    }
    void gearUp()
    {
        gear += 1;
        print_gear();
    }
    void gearUp(int gear, bool up = true) // Method overloadding
    {
        if (up == true)
            gear += this->gear;
        else
            gear -= this->gear;
        print_gear();
    }
    void changeColor()
    {
        cout << "Car Color change to red !" << endl;
    }
    void update_gear(int newGear = 0)
    {
        gear += newGear;
    }
};

class SportsCar : public Car
{
public:
    void gearUp() // Method overidding
    {
        update_gear(5);
        print_gear();
    }
    void changeColor(string color) // Method Overhiding
    {
        cout << "Car Color change to " << color << " !" << endl;
    }
};

int main()
{
    SportsCar s1;

    s1.gearUp();
    s1.gearUp();
    s1.gearUp();
    s1.changeColor("bluish dark");

    return 0;
}