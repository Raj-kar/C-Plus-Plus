#include <iostream>
using namespace std;

int main()
{
    int button;

    cout << "Enter a num [1-5]  :: " << endl;
    cin >> button;

    switch (button)
    {
    case 1:
        cout << "HELLO" << endl;
        break;

    case 2:
        cout << "Namaste" << endl;
        break;

    case 3:
        cout << "Salut" << endl;
        break;

    case 4:
        cout << "Hola" << endl;
        break;

    case 5:
        cout << "Ciao" << endl;
        break;

    default:
        cout << "I'm still learning more :) " << endl;
        break;
    }
    return 0;
}