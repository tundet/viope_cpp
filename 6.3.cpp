#include<iostream>

/*
Write a program that asks for student's exam grades (integers 4-10 inclusive) and prints the average of the given numbers.
Integers outside of the 4-10 range should not be included when calculating the average. Program receives numbers until
input is finished by inputting a negative number. Finally the program prints the amount of grades and their average.
*/

using namespace std;

int main()
{
  int input, total_grades = 0, grade = 0;

  cout << "Program calculates the test grade average.\n"
"Finish inputting with a negative number.\n";
  while (true)
  {
      cout << "Input grade (4-10) ";
      cin >> input;
      if (input < 0) {
        break;
      }
      if (input >= 4 && input <= 10) {
        total_grades += input;
        grade++;
      }
  };
  cout << "You inputted " << grade << " grades." << endl;
  cout << "Grade average: " << (float) total_grades / grade << endl;
}