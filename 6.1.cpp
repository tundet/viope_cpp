#include<iostream>

/*
Write a program that asks user for an integer n ((n>0) and prints the numbers 1,2,3..n on individual rows.
Use for-loop in the program.
*/

using namespace std;

int main()
{
  int number = 0, input;
  cout << "Input an integer:";
  cin >> input;
  do
  {
    cout << ++number << endl;
  } while (number < input);
}