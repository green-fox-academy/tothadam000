#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name;
        unsigned int age;
    public:
        ~Student(){
            cout << "Bye Hacker!" << endl;
        }
        void set_datas(string name, unsigned int age){
            this->name = name;
            this->age = age;
        }
        void greet(){
            cout << "Hello my name is: " << name << "." << endl;
        }
};

int main(){
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

    Student so;

    so.set_datas("Tibi", 200);

    so.greet();

  return 0;
}
