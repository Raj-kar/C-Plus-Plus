/* calculate the interest for fixed deposite in a bank. interest rate is 5%. 
capital amount will be between 1000-50000, otherwise an exception will arise. */

#include<iostream>
#include<string>
using namespace std;

int main() {
	long principle;
	int rate = 5, time;
	
	try {
		cout << "Enter your amount :: " << endl;
		cin >> principle;
		
		if (principle < 1000 or principle > 50000) {
			throw string("Capital amount should be between 1000-50000");
		} else {
			cout << "Enter Preiod of time in year :: " << endl;
			cin >> time;
	
			float simple_interese = principle + ((principle * time * rate) / 100);
			cout << "S.I = " << simple_interese;
        	}
	} catch (string e) {
		cout << e;
	}
	
	return 0;
}
