#include <iostream>
using namespace std;
const int Max = 10;
int input(double ar1[], int max_num);
void show(const double ar2[], int num);
double average(const double ar3[], int num);

int main()
{	
	double golf[10];
	cout << "Please enter at most ten scores of golf(enter \'q\' to quit):\n";
	int score_num = input(golf, Max);

	if(score_num == 0)
		cout << "You don't enter any score of golf!\n";
	else
	{
		show(golf, score_num);
		double ave = average(golf, score_num);
		cout << "The average score is: " << ave << endl;
	}
	return 0;
}

int input(double ar1[], int max_num)
{
	int i = 0;
	cout << "#" << i+1 << ": ";
	while ((i < max_num) && (cin >> ar1[i]))
	{
		i++;
		if(i < max_num)
		cout << "#" << i+1 << ": ";
	}
	return i;
}

void show(const double ar2[], int num)
{
	cout << "Here are the " << num << " scores of golf:\n";
	for (int i = 0; i < num; i++)
		cout << ar2[i] << '\t';
	cout << endl;
}

double average(const double ar3[], int num)
{
	double total = 0.0;
	for (int i = 0; i < num; i++)
		total += ar3[i];
	double av = total / num;
	return av;
}
