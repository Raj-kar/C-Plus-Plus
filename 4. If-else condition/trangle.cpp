/* Check if a triangle is scalene[no equal side], isosceles[two equal side] or equilaterail[all equal side]*/

#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    cout << "Enter three sides of a tringle " << endl;
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 and side2 == side3)
        cout << " The Tringle is a equilaterail";
    else if (side1 == side2 or side2 == side3 or side3 == side1)
        cout << " The Tringle is a isosceles";
    else
        cout << " The Tringle is a scalene";

    return 0;
}