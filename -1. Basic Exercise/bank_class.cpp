/* The original class was created by @SamwitAdhikary, it's just a modified version of the class with some changes. All the credits gpes to ©SamwitAdhikary.
   original class - https://cutt.ly/zjPmMS3
*/
#include<iostream>
#include<string.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int AC_LIMIT = 100;

class Bank {
    long acc_no;
    float balance;
    string name;

public:
    void openAccount();

    void showAccount() {
        cout << "\n\nAccount Number: " << acc_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit() {
        long amt;
        cout << "Enter Amount you want to Deposit: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw() {
        long amt;
        cout << "Enter Amount you want to Withdraw: ";
        cin >> amt;
        
        if (amt <= balance){
            balance -= amt;
            cout << amt << " deduct sucessfully !  \n You current account balance is " << balance;
        }
        else 
            cout << "You've not enough balance !";
    }

    long create_new_ac() {
        srand((unsigned)time(0));
        return rand() * 999;
    }

    bool searchAccount(long);
};

void Bank :: openAccount() {
    acc_no = create_new_ac();
    cout << "Name: ";
    cin >> name;
    cout << "How much money you want to deposit: ";
    cin >> balance;
    cout << "You account number is " << acc_no << endl;
}

bool Bank :: searchAccount(long a) {
    if(acc_no == a){
        showAccount();
        return true;
    }
    return false;
}

int is_account_found(Bank acc_arr[], int current_no, long ac_no)
{
    for (int i = 0; i < current_no; i++)
    {
        if (acc_arr[i].searchAccount(ac_no))
            return i;
    }
    cout << "NO data present on ac number " << ac_no;
    return -1;
}

int main()
{
    Bank account[AC_LIMIT];

    int found = 0, ch, current_ac_no = 0, is_found;
    long a;

    do {
        cout << "\n\n1. Create account \n2. Display All\n3. Display By Account Number\n4. Deposit\n5. Withdraw\n6. Exit" << endl;
             
        cout << "\n\nEnter Your Choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                account[current_ac_no].openAccount();
                current_ac_no += 1;
                break;

            case 2:
                for(int i = 0; i < current_ac_no; i++)
                    account[i].showAccount();
                break;

            case 3:
                cout << "\n\nEnter Account Number: ";
                cin >> a;
                is_account_found(account, current_ac_no, a);
                break;

            case 4:
                cout << "\n\nEnter Account Number to Deposit: ";
                cin >> a;
                is_found = is_account_found(account, current_ac_no, a);
                if (is_found != -1)
                    account[is_found].deposit();
                break;

            case 5:
                cout << "\n\nEnter Account Number to Withdraw: ";
                cin >> a;
                is_found = is_account_found(account, current_ac_no, a);
                if (is_found != -1)
                    account[is_found].withdraw();
                break;
                
            case 6:
                cout << "\n\nHave a nice day";
                break;

            default: 
                cout << "\n\nWrong input ! try again !!";
        };

    }while(ch != 6);

    return 0;
}
