#include <iostream>
#include <string>

/*
The below program creates an object called “printer” in a class called “PrintClass” and then uses the object to print text.
Your task is to write the class “PrintClass” and the required method.
*/

using namespace std;
class PrintClass
{
  public:
    void print(string cs);
};

void PrintClass::print(string cs)
{
   cout << cs << endl;
}

int main()
{
  char charstring[50];
  cout << "Input character string for printing:";
  cin.get(charstring, 50);
  PrintClass printer;
  printer.print(charstring);
}
