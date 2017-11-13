#include <iostream>

using namespace std;


// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

namespace Person
{
    string name = "Adam Toth";
    int age = 31;
    int favorite_number = 7;

    int year_of_the_born(){
    int born = 0;
    int current_year = 2017;

    born = current_year - age;

    return born;
    }
}

int main()
{
    using namespace Person;

    //year_of_the_born(age);

   cout << "I was born in " << year_of_the_born() << "." << endl;

    return 0;
}
