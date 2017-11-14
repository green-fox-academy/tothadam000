#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        unsigned int age;
    public:
        Student(string name, unsigned int age){
        this->name = name;
        this->age = age;
        }
        ~Student(){
        cout << "Bye Hacker!" << endl;
        }
        void print_data(){
        cout << "My name is " << name << " and my age is " << age << "." << endl;
        }
        /*void set_datas(string name, unsigned int age){
            this->name = name;
            this->age = age;
        }*/
};

int main() {
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21
    Student so("Adam", 31);

    //so.set_datas(Adam, 31);

    so.print_data();

    return 0;
}
