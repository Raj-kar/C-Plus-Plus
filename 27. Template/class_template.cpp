#include <iostream>
using namespace std;

template <class X>
class ArrayList
{
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;

public:
    ArrayList(int capacity)
    {
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new X[s->capacity];
    }
    void addElement(X value, int index)
    {
        if (index >= 0 and index < s->capacity)
            s->arr_ptr[index] = value;
        else
            cout << "Index out of range" << endl;
    }
    void showElement(int index)
    {
        if (index >= 0 and index < s->capacity)
            cout << "Value on index " << index << " is " << s->arr_ptr[index] << endl;
        else
            cout << "Index out of range" << endl;
    }
    void showList()
    {
        cout << "Values are = ";
        for (int i = 0; i < s->capacity; i++)
            cout << s->arr_ptr[i] << " ";
        cout << endl;
    }
};

int main()
{
    /*/ int list */
    ArrayList<int> list1(5);
    list1.addElement(10, 0);
    list1.addElement(12, 2);
    list1.addElement(15, 1);
    list1.showElement(0);
    list1.showElement(1);
    list1.showElement(2);
    list1.showList();

    /* float list */
    ArrayList<float> list2(5);
    list2.addElement(5.6, 0);
    list2.addElement(13.54, 2);
    list2.addElement(15.6, 1);
    list2.showElement(0);
    list2.showElement(1);
    list2.showElement(2);
    list2.showList();

    return 0;
}