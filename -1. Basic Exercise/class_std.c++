#include<iostream>
#include<string>
#include<cmath>
using namespace std;
;
class Student
{
	float marks[3];
	int roll;
	string name;
	
	public:
		Student(string std_name, int std_roll, float std_marks[])
		{
			name = std_name;
			roll = std_roll;
			for(int i=0; i<3; i++)
				marks[i] = std_marks[i];
		}
		void show_name()
		{
			cout << "Name of the std is =" << name << endl;
		}
		void show_roll()
		{
			cout << "Roll of the std is =" << roll << endl;
		}
		void show_marks()
		{
			for(int i=0; i<3; i++)
			{
				cout << "Sub" << i+1 << " marks = " << marks[i] << endl;
			}
		}
		float total_marks()
		{
			float total = 0;
			
			for(int i=0; i<3; i++)
			{
				total += marks[i];
			}
			return total;
		}
		float get_average()
		{
			return round(total_marks() / 3);
		}
};

int main()
{
	float std1_marks[3] = {93,96, 98};
	Student std1("Raj",117,std1_marks);
	
	std1.show_name();
	std1.show_roll();
	std1.show_marks();
	cout << "Total marks is = " << std1.total_marks() << endl;
	cout << "Average marks is = " << std1.get_average() << "%";
	
	return 0;
}
