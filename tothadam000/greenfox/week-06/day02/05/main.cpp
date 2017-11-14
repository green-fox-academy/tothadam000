#include <iostream>
#include <string>
// Create a `Circle` class that takes it's radius as constructor parameter
// It should have a `get_circumference` method that returns it's circumference
// It should have a `get_area` method that returns it's area

using namespace std;

class Circle {
    private:
        double radius;
    public:

        double get_circumference(){
            return 2 * 3.1416 * radius;
        }
        double get_area(){
            double area = 3.1416 * radius * radius;
            return area;
        }
        void set_datas(double radius){
            this->radius = radius;
         }
};

int main() {
    Circle co;

    co.set_datas(5);

    cout << "The area of the circle is: " << co.get_area() << endl;
    cout << "The circumference of the circle is: " << co.get_circumference() << endl;
    return 0;
}
