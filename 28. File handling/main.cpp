#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string sen;

    fout.open("test.txt");
    cout << "Enter a sentence :: " << endl;
    getline(cin, sen);

    fout << sen;

    return 0;
}