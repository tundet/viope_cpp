#include <iostream>

/*
Write a program that asks user for amount of dollars and converts them to euros. In the end the program prints the
amount of euros on screen. The exchange rate for euros is 0.727802. Use variables of the type double.
*/

using namespace std;

int main(void)
{
   double rate = 1.374, dollars, euros;

   cout << "How much dollars do you want to exchange:";
   cin >> dollars;
   euros = dollars/rate;
   cout << "Amount in euros: " << euros << endl;
}
