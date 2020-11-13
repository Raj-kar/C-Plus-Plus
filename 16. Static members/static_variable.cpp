#include<iostream>
using namespace std;

void call_me()
{   
    /*  Difference between static and int is, 
        > static got memory when the program start but int got memory
            when we call the call_me() function. 
        > int y will be destory every time, when our call_me() program execution will be complete, 
          but static x will destory when the program will end .  
        > static variable will initialise with 0(zero) but int will be initialise will garbage value.  
    */

    static int x = 0;
    int y = 0;

    cout << " x = " << x << " and y = " << y << endl;
    x += 1;
    y += 1;
}


int main()
{
    int count = 0;
    while (count <= 5)
    {
        call_me();
        count += 1;
    }

    return 0;
}


/*
output  --> 

 x = 0 and y = 0
 x = 1 and y = 0
 x = 2 and y = 0
 x = 3 and y = 0
 x = 4 and y = 0
 x = 5 and y = 0

*/