#include <iostream>
#include <string.h>
using namespace std;

/* encapsulation */
struct book
{
    private:    /* can't directly acess from outside */
        int book_id;
        char book_name[20];
        float book_price;

    public:
        void input() // function member
        {
            cout << "Enter Book id, title and price :: " << endl;
            cin >> book_id >> book_name >> book_price;
            if (book_price < 0) /* book price can't be negative */
                book_price = book_price * - 1;
        }
        void display() // function member
        {
            cout << "ID of book  = " << book_id << endl;
            cout << "NAME of book  = " << book_name << endl;
            cout << "PRICE of book  = " << book_price << endl;
        }
};

int main()
{
    /* in c++ struct keyword before book is optional [struct book b1 --> book b1] */
    book b1;

    b1.input();
    b1.display();
    
    return 0;
}