#include<iostream>
#include<string>
using namespace std;

class Student
{
	// Private Data members 
	float marks[3];
	int roll;
	string name;
	
	//	Public methods !
	public:
		Student() // Default Constructor
		{ 
			input_data(); // invoke input function, if user use default constructor !
		}
		Student(string std_name, int std_roll, float std_marks[]) // Parametarized Constructor
		{
			name = std_name;
			roll = std_roll;
			for(int i=0; i<3; i++)
				marks[i] = std_marks[i];
		}
		void input_data() // Input data from user
		{
			cout << "Enter your name :: " << endl;
			cin >> name;
			cout << "Enter your roll number :: " << endl;
			cin >> roll;
			for(int i=0; i<3; i++)
			{
				cout << "Enter marks of Sub" << i+1 << endl;
				cin >> marks[i];	
			}
		}
		void show_name() // display name 
		{
			cout << "Name of the std is =" << name << endl;
		}
		void show_roll() // display roll number 
		{ 
			cout << "Roll of the std is = " << roll << endl;
		}
		void show_marks() // display each subject marks 
		{
			for(int i=0; i<3; i++)
			{
				cout << "Sub" << i+1 << " marks = " << marks[i] << endl;
			}
		}
		void show_all()	// display std name, roll and marks !
		{
			show_name();
			show_roll();
			show_marks();
		}
		float total_marks()	// return total marks of the student 
		{
			float total = 0;
			
			for(int i=0; i<3; i++)
			{
				total += marks[i];
			}
			return total;
		}
		float get_average()	// return average of the student 
		{
			return total_marks() / 3;
		}
};

void print_obj_data(Student obj) // print Object all Data !
{
	obj.show_all();
	cout << "Total marks is = " << obj.total_marks() << endl;
	cout << "Average marks is = " << obj.get_average() << "%" << endl;
	cout << "-------------------------" << endl;
}


int main()
{
	float std1_marks[3] = {93,96, 98}; // value defined 
	Student std1("Raj",117,std1_marks); // std1 obj created - Parametarized invoke
	print_obj_data(std1); // - normal func.
	
	float std2_marks[3] = {79,88,96}; // value defined 
	Student std2("Rai",11,std1_marks); // std2 obj created - Parametarized invoke
	print_obj_data(std2); 
	
	Student std3; // std3 obj created - default constructor invoke
	print_obj_data(std3); 
	
	return 0;
}
