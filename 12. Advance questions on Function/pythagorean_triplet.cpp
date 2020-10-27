#include <iostream>
using namespace std;

bool is_pythagorean(int num1, int num2, int num3)
{
    int maximum = max(num1, max(num2, num3));
    int second, third;

    if (maximum == num1)
    {
        second = num2;
        third = num3;
    }
    else if (maximum == num2)
    {
        second = num1;
        third = num3;
    }
    else
    {
        second = num1;
        third = num2;
    }

    if (maximum * maximum == ((second * second) + (third * third)))
        return true;
    else
        return false;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter num1 , num2 and num3 respectively :: ";
    cin >> num1 >> num2 >> num3;

    if (is_pythagorean(num1, num2, num3))
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not Pythagorean Triplet";
    }

    return 0;
}

/*
Enter num1 , num2 and num3 respectively :: 4 5 3
Pythagorean Triplet
*/