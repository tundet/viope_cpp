#include<iostream>

/*
Write a program that asks user for an integer n (n>0) and prints the factorial of that number on screen.
Example: factorial of n is marked with n!, which means 1*2*3...n.
*/

using namespace std;

int main()
{
  int input, integer, factorial = 1;
  cout << "Input an integer:";
  cin >> input;
  integer = input;
  while (integer > 1)
  {
      factorial *= integer;
      integer--;
  };
  cout << "The factorial of number " << input << " is " << factorial << endl;
}