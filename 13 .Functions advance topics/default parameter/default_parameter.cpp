#include<iostream>
using namespace std;

int add(int, int, int=0);
int main(){
    int a,b;

    cout << "Enter two values :: " << endl;
    cin >> a >> b;
    cout << "Sum is = " << add(a,b) << endl;

    int c;

    cout << "Enter three values :: " << endl;
    cin >> a >> b >> c;
    cout << "Sum is = " << add(a,b,c) << endl;

    return 0;
}

int add(int a,int b, int c){
    return (a+b+c);
}