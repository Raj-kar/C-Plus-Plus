#include <iostream>
using namespace std;

class Box
{
    int width, height;

public:
    void setValue(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
    void showValue()
    {
        cout << "Box height is " << height << " and width is = " << width << endl;
    }
};

int main()
{ /* DMA --> Dynamic memory allocation, get memory during runtime.
    new create dynamic space and delete clears the memory space ! */
    int *a = new int;
    float *f = new float;
    Box *box = new Box;
    int *arr = new int[5];

    *a = 5;

    cout << "Value of a = " << *a << endl;

    box->setValue(10, 15);
    box->showValue();

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    delete a;
    delete f;
    delete box;
    delete[] arr;
}