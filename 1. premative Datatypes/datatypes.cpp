#include <iostream>
using namespace std;

int main()
{
    int a;  // declaration
    a = 10; // initialisation
    cout << "Size of int " << sizeof(a) << endl;

    float b = 10.10;
    cout << "Size of float " << sizeof(b) << endl;

    char c;
    cout << "Size of char " << sizeof(c) << endl;

    bool d = true;
    cout << "Size of bool " << sizeof(d) << endl;

    // we can modify our datatypes using type modifier
    short int si;
    long int li;

    cout << "Size of showtint " << sizeof(si) << endl;
    cout << "Size of longint " << sizeof(li) << endl;

    return 0;
}

/* 
Size of int 4
Size of float 4
Size of char 1
Size of bool 1 
Size of showtint 2
Size of longint 4
*/