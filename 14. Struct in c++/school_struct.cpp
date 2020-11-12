#include<iostream>
using namespace std;

struct school
{
    private:
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
            if(id < 0)
                id = id * -1;
        }

        void display()
        {
            cout << "School id -> " << id << " name -> " << name << " address -> " << address << " position -> " << position << endl;
        }
};


int main()
{
    school s1, s2, s3;
    s1.input();
    s2.input();
    s3.input();

    s1.display();
    s2.display();
    s3.display();

    return 0;
}