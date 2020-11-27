#include <iostream>
using namespace std;

class Array
{
    int arr[20];

public:
    void insert(int val, int index = 0)
    {
        arr[index] = val;
    }
    void remove(int top)
    {
        arr[top] = '\0';
    }
    void show(int top = 20)
    {
        for (int i = 0; i < top; i++)
            cout << arr[i] << " ";
    }
};

class Stack : private Array
{
    int top = 0;

public:
    void push(int val)
    {
        if (top >= 20)
            cout << "Stack - Overflow";
        else
        {
            insert(val, top);
            top++;
        }
    }

    void pop()
    {
        remove(top);
        top--;
    }

    void display()
    {
        if (top == 0)
            cout << "Underflow " << endl;
        else
        {
            cout << "Values on stack - " << endl;
            show(top);
        }
    }
};

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(5);
    s1.push(1);
    s1.push(15);
    s1.pop();

    s1.display();
    return 0;
}