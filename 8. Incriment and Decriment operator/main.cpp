#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    //  1   + 3  = 4
    i = i++ + ++i;
    cout << i << endl;

    return 0;
}

/* Detailed Explation ->    
* go through left to right 

i = i++ + ++i;  [line number 9]
so, at fist i++ is, post incriment, mean first i values used, then i'll incriment.
then, when compiler comes to ++i, the previous incriment take places, so now i is 2.
and we perfrom a pre incriment, so at first i will be incriment to 3, then i'll add to 1 
using binary operator '+'. so 3+1 becames 4. and it will be printed !    
*/