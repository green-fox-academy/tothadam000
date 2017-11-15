#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)
//------------------------------------------------------------
// Continue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)
//------------------------------------------------------------
// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It should return the costs of the painting

class Shape {
     protected:
        int price_of_the_paint;
        float area;
        virtual void calc_area() = 0;
     public:
        int how_much_to_paint(){
            return area * price_of_the_paint;
        }
        int set_price_of_the_paint(float price_of_the_paint){
            this->price_of_the_paint = price_of_the_paint;
        }
};

class Circle: public Shape{
    protected:
        void calc_area(){
            this->area = 3.1416 * radius * radius;
        }
    private:
        float radius;
    public:
        void set_radius(float radius){
            this->radius = radius;
            calc_area();
        }
        float get_area(){
            return area;
        }
};

class Triangle: public Shape{
    protected:
       void calc_area(){
            this->area = (height * base) / 2;
        }

    private:
        float height;
        float base;
    public:
        void set_datas(float height, float base){
            this->height = height;
            this->base = base;
            calc_area();
        }
        float set_datas(){
            return area;
        }
        float get_area(){
            return area;
        }
};

int main()
{
    Circle circle_object;
    circle_object.set_price_of_the_paint(15);
    circle_object.set_radius(5);
    cout << "the area of the circle is: " << circle_object.get_area() << endl;
    cout << "Price of the paint is: " << circle_object.how_much_to_paint() << endl << endl;

    Triangle triangle_object;
    triangle_object.set_price_of_the_paint(15);
    triangle_object.set_datas(12, 36);
    cout << "the area of the triangle is: " << triangle_object.get_area() << endl;
    cout << "Price of the paint is: " << triangle_object.how_much_to_paint() << endl;

    return 0;
}
