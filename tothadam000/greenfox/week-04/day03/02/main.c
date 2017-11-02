#include <stdio.h>
// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

typedef enum {VOLVO, TOYOTA, LAND_ROVER, TESLA}CarType;

typedef struct {
  CarType type;
  double km;
  double gas;
}Car;

int main() {
    Car one = {VOLVO, 456, 12};
    Car two = {TOYOTA, 143, 46};
    Car three = {LAND_ROVER, 951, 324};
    Car four = {TESLA, 982, 12};

    printf("VOLVO\n");
    print_car(one);
    printf("TOYOTA\n");
    print_car(two);
    printf("LAND_ROVER\n");
    print_car(three);
    printf("TESLA\n");
    print_car(four);

    return 0;
}
void print_car(Car car1){
    printf( "%.f \n", car1.km);
    if (car1.type != TESLA){
        printf("%.f\n", car1.gas);
    }
}

