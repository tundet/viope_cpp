#include <iostream>
#include <string>

/*
In the last exercise of Viope C++ we practice creating an inherited class. Below is a program that already has the class
Vehicle. Main program utilizes a method from class Car, which inherits Vehicle class. Your task is to creat the Car class
and it's methods.
*/

using namespace std;

class Vehicle
{
  public:
  int weight;
  int top_speed;
  long driven_km;
  Vehicle(int weight, int top_speed, long driven_km);
  void Drive(int journey);
  int InputWeight();
  int InputTopSpeed();
  long InputDrivenKm();
};

Vehicle::Vehicle(int Aw, int Ats, long Akm)
{
  weight = Aw;
  top_speed = Ats;
  driven_km = Akm;
}

void Vehicle::Drive(int journey)
{
  driven_km += journey;
}

int Vehicle::InputWeight()
{
  return weight;
}

int Vehicle::InputTopSpeed()
{
  return top_speed;
}

long Vehicle::InputDrivenKm()
{
  return driven_km;
}
class Car: public Vehicle
{
   string brand, model, license;
   bool running;

 public:
   Car(int carWeight, int carSpeed, int DrivenKm,
        string carBrand, string carModel, string carLicense,
        bool CarRunning);
   void check_up();
   void turn_off();
   void turn_on();
};


Car::Car(int carWeight, int carSpeed, int DrivenKm,
           string carBrand, string carModel, string carLicense,
           bool CarRunning) :
           Vehicle(carWeight, carSpeed, DrivenKm)
{
   Car::brand = carBrand;
   Car::model = carModel;
   Car::license = carLicense;
   Car::running = CarRunning;
}

void Car::turn_on()
{
   Car::running = 1;
}

void Car::turn_off()
{
   Car::running = 0;
}

void Car::check_up()
{
   cout << "car info:" << endl;
   cout << "brand:" << Car::brand << endl;
   cout << "model:" << Car::model << endl;
   cout << "Kilometres:" << InputDrivenKm() << endl;
   cout << "weight:" << InputWeight() << endl;
   cout << "Top speed:" << InputTopSpeed() << endl;
   cout << "License plate:" << Car::license << endl;

   if(Car::running == 1){
     cout << "car is running." << endl;
   }else{
     cout << "car is not running." << endl;
   }
}

int main()
{
  int weight, speed;
  long km;
  string brand, model, license;

  // Ask for car information
  cout << "Input car brand: ";
  cin >> brand;

  cout << "Input car model: ";
  cin >> model;

  cout << "Input car license plate number: ";
  cin >> license;

  cout << "Input car weight: ";
  cin >> weight;

  cout << "Input car top speed: ";
  cin >> speed;

  cout << "Input distance traveled by car: ";
  cin >> km;
  cout << endl;
  Car carX(weight, speed, km, brand, model, license, 0);

  carX.check_up();
  carX.turn_on();
  carX.Drive(95);
  cout << endl;
  carX.check_up();
}
