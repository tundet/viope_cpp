#include <cstdlib>
#include <iostream>

/*
Write a program that asks user for two integers, calculates their sum and prints it on screen.
After printing the program shuts down.
*/

using namespace std;

int main()
{
    int num1;
    int num2;
    cout << "Type the first number:";
	cin >> num1;
    cout << "Type the second number:";
	cin >> num2;
    int num3 = num1 + num2;
    cout << "Sum of the numbers is " << num3 << endl;
}