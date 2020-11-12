#include<iostream>
using namespace std;

int area(int, int);
float area(int);
int main(){
    int r;

    cout << "Enter Radius of Circle :: " << endl;
    cin >> r;
    cout << "Area of the circle is " << area(r) << endl;

    int l,b;

    cout << "Enter length and breath of rectangle :: " << endl;
    cin >> l >> b;
    cout << "Area of the rectangle is " << area(l,b) << endl;

    return 0;
}

float area(int r){
    return (3.14*r*r);
}

int area(int l, int b){
    return (l*b);
}