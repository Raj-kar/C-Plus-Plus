#include <iostream>
using namespace std;

class A
{
    int num;

public:
    void setData(int data)
    {
        num = data;
    }
};

class B : protected A
{
public:
    void setValue(int val)
    {
        setData(val);
    }
};

int main()
{
    A obja;
    B objb;

    obja.setData(4);
    objb.setValue(4);

    return 0;
}