#include <iostream>
using namespace std;

class Animal
{
    string name;

public:
    Animal()
    {
        cout << "A object of Animal created ! " << endl;
    }
    ~Animal()
    {
        cout << "A object of Animal destroyed ! " << endl;
    }
    void eat()
    {
        cout << "Animal Eatting .. !" << endl;
    }
    void sleep()
    {
        cout << "Animal Sleeping .. !" << endl;
    }
    void bark(string sound)
    {
        cout << sound << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "A object of Dog created ! " << endl;
    }
    ~Dog()
    {
        cout << "A object of Dog destroyed ! " << endl;
    }
    void jump()
    {
        cout << "Dog Jumping !! " << endl;
    }
    void running()
    {
        cout << "Dog Runs .. !" << endl;
    }
};

int main()
{
    Dog d1;

    d1.jump();
    d1.sleep();
    d1.running();

    return 0;
}