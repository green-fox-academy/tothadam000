#include <iostream>
#include <vector>

using namespace std;

// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.

class Human {
    public:
    virtual void travelling(){
        cout << "I'm Human and i'm walking." << endl;
    }
};

class SuperHuman: public Human{
    public:
    void travelling(){
        cout << "I'm SuperHuman and i'm flying." << endl;
    }
};

class AquaHuman: public SuperHuman{
    public:
    void travelling(){
        cout << "I'm AquaHuman and i'm riding with dolphins." << endl;
    }
};

int main()
{
    Human human_object;
    human_object.travelling();

    SuperHuman superHuman_object;
    superHuman_object.travelling();

    AquaHuman aquaHuman_object;
    aquaHuman_object.travelling();

    return 0;
}
