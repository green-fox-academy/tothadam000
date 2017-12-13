#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    private:
        vector<uint8_t>grades;

    public:
        void add_grade(uint8_t _grade){
            if (_grade < 1 || _grade > 5){
                cout << "Incorrect grade you moron!" << endl;
            }
             else
                grades.push_back(_grade);
        };
        float get_average(){
            if (grades.size()==0){
                cout << "There is no grades!";
                return 0;
            }
            unsigned int sum = 0;
            for (int i = 0; i < grades.size(); ++i){
                sum += grades.at(i);
            }
            return (float)sum / grades.size();
        };

};

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
    Student s;
    s.add_grade(3);
    s.add_grade(2);
    s.add_grade(4);
    s.add_grade(1);
    s.add_grade(1);
    s.add_grade(5);
    s.add_grade(4);

    cout << "The average of the grades: " << s.get_average() << endl;


  return 0;
}
