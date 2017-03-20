#include <iostream>

/*
In the exercise both the main program and the class "Calculator" have been completed. Your task is to make up class "Printer"
that asks the user for two integers, calls for the class "Calculator" method "Sum()" transferring the integers received as
input to the method. Method "Sum()" calculates the sum of the integers and returns the result. At the end method "Print()"
prints the given sum on screen. I.e. the code below doesnt need to be copied to the answer field.
*/

using namespace std;

class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}
class Printer
{
   int a, b, c;
 public:
   void Print();
};

void Printer::Print()
{
   int a, b, c;

   cout << "Give a first integer: ";
   cin >> a;
   cout << "Give a second integer: ";
   cin >> b;
   Calculator object;
   c = object.Sum(a, b);
   cout << "Sum: " << c << endl;
}
int main()
{
  Printer object;
  object.Print();
}
