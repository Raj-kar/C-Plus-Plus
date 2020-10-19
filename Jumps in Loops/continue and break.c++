/* A Girl, name Neha, she love travelling very much. But her mom, only allows her on Odd days 
[like 1, 3 , 5...], write a program to simulate the current situation  */

#include <iostream>
using namespace std;

int main()
{
    int pocketMoney = 3000;

    for (int day = 1; day <= 31; day++)
    {
        if (day % 2 == 0)
            continue; // used to skip to the next iteration !

        if (pocketMoney == 0)
        {
            cout << "Neha you can't go outside your pocket money has " << pocketMoney << endl;
            break; // terminate the loop
        }

        cout << "Neha you can go outside on day " << day << " pocket money has " << pocketMoney << endl;
        pocketMoney -= 300;
    }

    return 0;
}