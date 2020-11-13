#include <iostream>
using namespace std;

class School
{ /* by deafult all class members are private */
    int id;
    char name[20];
    char address[20];
    int position;

public:
    void input()
    {
        cout << "Enter School id, name, address, position :: " << endl;
        cin >> id >> name >> address >> position;
        if (position < 0)
            position = position * -1;
        if (id < 0)
            id = id * -1;
    }

    void display()
    {
        cout << "School id -> " << id << " name -> " << name << " address -> " << address << " position -> " << position << endl;
    }
};

int main()
{
    School s1, s2, s3; /* objects */
    s1.input();
    s2.input();

    s1.display();
    s2.display();

    return 0;
}