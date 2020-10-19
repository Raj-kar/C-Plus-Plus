/* check a alphabate is vowel or consonent*/

#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Enter an alphabate" << endl;
    cin >> c;

    c = tolower(c);

    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        cout << c << " is a vowel";
    else
        cout << c << " is a consonent ";

    return 0;
}