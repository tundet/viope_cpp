#include <iostream>
#include <string>

/*
Below you can find class "Dog" that is lacking a starting method needed for constructing objects and methods PrintInformation()
and Bark(). Make additions to the class so that it becomes possible to construct objects from class. Also make up the missing
methods. While being constructed the object will be given values: age, name, race and voice.
*/

using namespace std;
class Dog
{
   int age;
   string name, race, voice;

 public:
   Dog(int DogsAge, string Dogsname, string DogsRace, string BarkVoice);
   string Bark();
   void PrintInformation();
};

Dog::Dog(int age, string name, string race, string voice)
{
   Dog::age = age;
   Dog::name = name;
   Dog::race = race;
   Dog::voice = voice;
}

string Dog::Bark()
{
   return Dog::voice;
}

void Dog::PrintInformation()
{
   cout << "Name: " << Dog::name << endl;
   cout << "Age: " << Dog::age << endl;
   cout << "Race: " << Dog::race << endl;
}
int main()
{
  Dog buffy(2, "Buffy", "Bulldog", "Hau!!!");
  buffy.PrintInformation();
  cout << "Dog says: " << buffy.Bark();
}
