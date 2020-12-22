#include <iostream>
#include <string>
using namespace std;

class Str
{
    string str;

public:
    Str(string x) /* constructor */
    {
        str = x;
    }
    Str() /* default constructor */
    {
    }
    void set_data(string x) /* for set value */
    {
        str = x;
    }
    void show_data() /* for show value */
    {
        cout << str << endl;
    }
    void operator=(Str obj)
    {
        if (str != obj.str)
            cout << str << " and " << obj.str << " are not same. " << endl;
        else
            cout << str << " and " << obj.str << " are same. " << endl;
    }
};

int main()
{
    Str str1, str2("Raj"), str3, str4("RAJA");
    str1.set_data("RAJA");
    str3.set_data("RAJ");

    str1 = str2; /* not same */
    str2 = str3; /* not same */
    str1 = str4; /* same */

    return 0;
}