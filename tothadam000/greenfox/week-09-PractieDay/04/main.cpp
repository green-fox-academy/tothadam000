#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        int hunger_level;
        int thirst_level;

    public:
        Animal() {
        hunger_level = 50;
        thirst_level = 50;
        }

        void eat(int a){
            hunger_level -=a;
            cout << "I have eaten and my hunger level is: " << hunger_level << endl;
        }

        void drink(int b){
            thirst_level -= b;
            cout << "I have drunk and my thirst level is: " << thirst_level << endl;

        }

        void play(int c){
            hunger_level += c;
            thirst_level += c;
            cout << "I have played and my hunger level is: " << hunger_level << " my thirst level is: " << thirst_level << endl;
        }
};
class Fox: public Animal{

};
class Dog: public Animal {

};
int main() {
//Create Animal class
//Every animal has a hunger value, which is a whole number
//Every animal has a thirst value, which is a whole number
//when creating a new animal object these values are created with the default 50 value
//Every animal can eat() which decreases their hunger by one
//Every animal can drink() which decreases their thirst by one
//Every animal can play() which increases both by one

    Fox f;

    f.eat(8);
    f.drink(3);
    f.play(6);

  return 0;
}
