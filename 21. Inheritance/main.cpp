#include <iostream>
using namespace std;

class Car
{
    int price, capacity;
    string fuelType, engine, color;

public:
    Car(int _price, int _capacity, string _fuel, string _engine, string _color)
    {
        price = _price;
        capacity = _capacity;
        fuelType = _fuel;
        engine = _engine;
        color = _color;
    }

    Car()
    {
    }
    void setPrice(int _price)
    {
        price = _price;
    }
    void setFuleType(string _fuel)
    {
        fuelType = _fuel;
    }
    void setEngine(string _engine)
    {
        engine = _engine;
    }
    void setColor(string _color)
    {
        color = _color;
    }
    void setCapacity(int _capacity)
    {
        capacity = _capacity;
    }
    void getPrice()
    {
        cout << "Price is " << price << endl;
    }
    void getFuelType()
    {
        cout << "Fuel type is " << fuelType << endl;
    }
    void getEngine()
    {
        cout << "Engine is " << engine << endl;
    }
    void getColor()
    {
        cout << "Color is " << color << endl;
    }
    void getCapacity()
    {
        cout << "Capacity is " << capacity << endl;
    }
    void showDetails()
    {
        cout << "Price = " << price << " Capacity = " << capacity << " Fuel type = " << fuelType << " Engine = " << engine << " Color = " << color << endl;
    }
};

class SuperCar : public Car
{
    string navigator, safeGuard, alarm;

public:
    void setAlaram(string _time)
    {
        alarm = _time;
    }
    void setNavigator(string _navi)
    {
        navigator = _navi;
    }
    void setSafeGuard(string _guard)
    {
        safeGuard = _guard;
    }
    void getAlarm()
    {
        cout << "Alarm is on = " << alarm << endl;
    }
    void getNaviator()
    {
        cout << "Current Navigator is " << navigator << endl;
    }
    void getSafeGuard()
    {
        cout << "Activate the SafeGuard at " << safeGuard << endl;
    }
};

int main()
{
    Car audi(1899999, 120, "disel", "bs6", "black");
    audi.showDetails();
    audi.setEngine("bs8");
    audi.getEngine();

    SuperCar bmw09;
    bmw09.setPrice(78899999);
    bmw09.setColor("darkish-blue");
    bmw09.setAlaram("12:00:00:00 AM");
    bmw09.setCapacity(190);
    bmw09.setEngine("bs9");
    bmw09.setFuleType("Nitrous-disel");

    bmw09.getAlarm();
    bmw09.showDetails();

    return 0;
}