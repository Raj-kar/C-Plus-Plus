#include <iostream>
using namespace std;

class Car
{
    int speed;
    string name;

public:
    Car(string n)
    {
        name = n;
        speed = 0;
    }
    void show_car()
    {
        cout << " Car model is " << name << endl;
    }
    void show_speed()
    {
        cout << " Car speed is " << speed << endl;
    }
    void speed_up(int sp)
    {
        speed += sp;
        cout << " Speed increses by " << sp << endl;
        cout << " New car speed is " << speed << endl;
    }
};

int main()
{
    Car c1("BMW"), c2("AUDI");
    c1.show_car();
    c1.show_speed();
    c1.speed_up(50);
    c1.speed_up(40);
    c1.show_speed();
    cout << endl;
    c2.show_car();
    c2.speed_up(30);
    c2.speed_up(70);
    c2.show_speed();

    return 0;
}