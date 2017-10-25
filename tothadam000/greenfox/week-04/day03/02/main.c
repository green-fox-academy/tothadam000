#include <stdio.h>
// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

int main() {
    struct Car one = {VOLVO, 456, 12};
    struct Car two = {TOYOTA, 143, 46};
    struct Car three = {LAND_ROVER, 951, 324};
    struct Car four = {TESLA, 982, 12};

    printf("VOLVO\n");
    print_car(one);
    printf("TOYOTA\n");
    print_car(two);
    print_car(three);
    print_car(four);

    return 0;
}
void print_car(struct Car car1){
    printf( "%.f \n", car1.km);
    if (car1.type != TESLA){
        printf("%.f\n", car1.gas);
    }

}

