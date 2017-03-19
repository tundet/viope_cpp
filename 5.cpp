#include <iostream>

/*
Write a program that asks for the circle radius and calculates the area of the circle based on it. In the end the area is
printed on screen. Use the approximate value of 3.142 for π. User is expected to input only integers.
*/

using namespace std;

int main()
{
    int radius;
    double pi = 3.142;
    cout << "Input circle radius:";
    cin >> radius;
    cout << "Circle area with the given radius: " << radius * radius * pi << endl;
}