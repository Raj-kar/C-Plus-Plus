#include <iostream>
using namespace std;

class Person
{
public:
    virtual void fun() = 0; /* do nothing func. -> pure virtual function */
};

class Student : public Person
{
public:
    // virtual void fun() = 0,  you can make again pure virtual function ..! ;
    void fun()
    {
        cout << "Without overidding, you can't use abstract class methods !" << endl;
    }
};

int main()
{
    // Person p1; Can't create object of abstract class, if the class has do-nothing method
    Student s1;
    s1.fun();

    return 0;
}

/* if a class contating one or more pure virtual functions, then we can't create any obj of the class,
   and we create any derived, then we have to override the do-nothing functions, that's called absract
   class in c++ */

/*  why we need abstract class ?
 -> After genalarise, protecting important imformation ! 
 -> Reduce Efforts !
 -> 

*/