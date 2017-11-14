#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        unsigned int age;

        Student(string name, unsigned int age) {
            this->age = age;
            this->name = name;
        }
        ~Student(){
            cout << "Bye Hacker!" << endl;
        }
        void print_data(){
            cout << "My name is " << name << " and my age is " << age << "." << endl;
        }
        void set_datas(string name, unsigned int age){
            this->name = name;
            this->age = age;
        }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor
    Student so("Tibi", 100);

    so.print_data();

    so.set_datas("John", 21);

    so.print_data();


  return 0;
}
