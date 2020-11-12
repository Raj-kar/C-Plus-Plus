#include <iostream>
#include <string.h>
using namespace std;

struct book
{
    int book_id;
    char book_name[20];
    float book_price;
};

inline void print_data(book);
inline book input();
int main()
{
    /* in c++ struct keyword before book is optional [struct book b1 --> book b1] */
    struct book b1 = {101, "C++ with Raj", 432.34};
    book b2;

    b2.book_id = 102;
    strcpy(b2.book_name, "Philo with Rai");
    b2.book_price = 250.00;

    book b3 = input();

    print_data(b1);
    print_data(b2);
    print_data(b3);

    return 0;
}

/* taking input from user */
book input()
{
    book b;

    cout << "Enter Book id, title and price :: " << endl;
    cin >> b.book_id >> b.book_name >> b.book_price;
    return b;
}

void print_data(book B)
{
    cout << "ID of book  = " << B.book_id << endl;
    cout << "NAME of book  = " << B.book_name << endl;
    cout << "PRICE of book  = " << B.book_price << endl;
}