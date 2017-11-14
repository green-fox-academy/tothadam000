#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        string type;
        unsigned int km;
    public:
        Car(string type, unsigned int km){
            this->type = type;
            this->km = km;
        }
        ~Car(){
            cout <<" Bye Hacker!" << endl;
        }
        void run_method (){

            unsigned int plus_km;

            cout << "Pls type the +kms: " << endl;
            cin >> plus_km;

            km = km + plus_km;
            cout << "The new km is " << km << endl;
        }
};

int main() {
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parameter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

    Car co("Mazda", 40);

    co.run_method();

  return 0;
}
