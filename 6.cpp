#include <iostream>

/*
Write a program that asks user for two integers and prints the sum, difference, product and remainder of the two numbers.
*/

using namespace std;
int main() {
    int num1, num2;
    cout << "Input first integer:";
    cin >> num1;
    cout << "Input second integer:";
    cin >> num2;
    cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
    cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
    cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
    cout << "Remainder: " << num1 % num2 << endl;
}