#include <iostream>

/*
Write a program that calculates the amount of work hours in a given time frame and prints the total amount of hours,
the average work day length and inputted hours separated by spaces. The program first asks how many days will be inputted
(max. 30 days). After this the program proceeds to ask the daily work hours.
*/

using namespace std;

int main()
{
	int days;
	double hours[30];
	double total = 0;


	cout << "The program calculates the total amount of" << endl;
	cout << "work hours during a given time frame and the average work day length." << endl;
	cout << "How many days:" << endl;
	cin >> days;

	for (int i=0; i<days; i++) {

		cout << "Input hours of workday " << i+1 << ": ";
		cin >> hours[i];

		total = total + hours[i];

	}

	cout << "Total work hours: " << total << endl;
	cout << "Average work day length: " << total / days << endl;
	cout << "Inputted hours: ";

	for (int i=0; i<days; i++){
		cout << hours[i] << " ";
	}

	cout << endl;
}
