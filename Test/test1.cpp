#include <iostream>
using namespace std;

class Test
{
    int num1, num2;

public:
    void setData(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    void displyData()
    {
        cout << "Num1 = ";
    }
};

int main()
{

    return 0;
}