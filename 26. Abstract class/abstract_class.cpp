#include<iostream>
using namespace std;

class Shape {
	protected:
		float l;
	public:
		void getData() {
			cin >> l;
		}
		
//		pure virtual function
		virtual float calculateArea() = 0;
};

class Square: public Shape {
	public:
		float calculateArea() {
			return l*l;
		}
};

class Circle: public Shape {
	public:
		float calculateArea() {
			return 3.14 * l * l;
		}
};

int main() {
	Square s;
	Circle c;
	
	cout << "\nEnter the length to calculate the area of square :" << endl;
	s.getData();
	cout << "Area of square = " << s.calculateArea() << endl;
	
	cout << "\nEnter the radius :" << endl;
	c.getData();
	cout << "Area of circle = " << c.calculateArea() << endl;
	
	return 0;
}
