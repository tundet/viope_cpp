#include <iostream>

/*
Below program asks user for three integers and prints the smallest and largest of those three on screen. Your task is
to write the missing functions (largest() and smallest ()), which receive the user input as parameters and return the
largest and smallest integers, respectively.
*/

using namespace std;

int largest(int first, int second, int third);
int smallest(int first, int second, int third);

int main()
{
  int number1, number2, number3, largestNumber, smallestNumber;
  cout << "Input the first integer:";
  cin >> number1;
  cout << "Input the second integer:";
  cin >> number2;
  cout << "Input the third integer:";
  cin >> number3;
  largestNumber = largest(number1, number2, number3);
  smallestNumber = smallest(number1, number2, number3);
  cout << "The largest number was " << largestNumber;
  cout << " and smallest " << smallestNumber << "." << endl;
}

int smallest(int first, int second, int third)
{
   int temp;

   if (first <= second){
     temp = first;
   }else{
     temp = second;
   }
   first = temp;
   if (first <= third){
     temp = first;
   }else{
     temp = third;
   }
   return temp;
}

int largest(int first, int second, int third)
{
   int temp;

   if (first >= second){
     temp = first;
   }else{
     temp = second;
   }
   first = temp;
   if (first >= third){
     temp = first;
   }else{
     temp = third;
   }
   return temp;
}


