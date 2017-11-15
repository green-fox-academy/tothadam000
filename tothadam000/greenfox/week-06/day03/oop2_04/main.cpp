#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the non-virtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a pointer.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*

class ParentClass {
    public:
        virtual string first_function(){
            return "This is a string";
        }
        string second_function(){
            return "This is an another string";
        }
};

class ChildClass: public ParentClass{
    public:
        string first_function(){
            return "This is a unique string";
        }
        string second_function(){
            return "This is an another unique string";
        }
};

int main()
{
    ParentClass* a = new ChildClass();

    return 0;
}
