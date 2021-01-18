#include<iostream>
using namespace std;

void draw_bar(int row, int column)
{
	for(int i=0; i< row; i++)
	{
		for(int j=0; j< column; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int n, row, column;
	
	cin >> n;
	
	draw_bar(3*n, n);
	draw_bar(n, 4*n);
}
