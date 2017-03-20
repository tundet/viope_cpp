#include <iostream>
#include <cmath>

/*
Write a program that calculates the hypotenuse of an orthogonal triangle based on the triangle legs inputted by the user.
The leg lengths are assumed to be integers and the hypotenuse value is assigned into a double type variable.
*/

using namespace std;

int main(void)
{
   int first, second;
   double c, multiplication;

   cout << "Input first triangle leg:";
   cin >> first;

   cout << "Input second triangle leg:";
   cin >> second;

   multiplication=(first*first)+(second*second);
   c = sqrt(multiplication);

   cout << "Hypotenuse length: " << c << endl;

}