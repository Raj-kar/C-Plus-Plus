#include<iostream>
using namespace std;

int main()
{
    int num = 1;

	start:
    cout << num << " ";
    num += 1;
    
    if(num <= 10)
    	goto start;

    return 0;
}
/* output --> 1 2 3 4 5 6 7 8 9 10 */