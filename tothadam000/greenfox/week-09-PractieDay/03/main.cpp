#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        string type;
        int km;

    public:
        Car (string type, int km){
            this -> type = type;
            this -> km = km;
        }
        void run(int km){
            this -> km += km;
            cout << type << ": " <<  this -> km << endl;

        }
};

int main() {
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

    Car c("Mustang", 1000);
    c.run(469);
    // vagy igy:
    Car car = Car("Ocskavas", 50000);
    car.run(500);

  return 0;
}
