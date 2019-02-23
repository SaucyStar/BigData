#include <iostream>
double average(double x, double y);
int main()
{
	using namespace std;
	double num1,num2;
	double ave;
	cout << "Please enter two numbers: ";

	while (!(cin >> num1 >> num2) || (num1 && num2))
	{
	   if (num1 && num2)
		{
			ave = average(num1, num2);
			cout << "The average of two non-zero numbers is " << ave << endl;
			cout << "Please enter two numbers: ";
		}
	   	
	   	else
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter two numbers rightly: ";	
		} 
		

	} 

	cout << "You have entered at least one zero number! Bye!\n";   

	return 0;
}

double average(double x, double y)
{
	double temp;
	temp= 2.0*x*y/(x+y);
	return temp;
}

// child_1
// child_2
