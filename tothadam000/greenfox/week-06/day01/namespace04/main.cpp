#include <iostream>
using namespace std;
// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it
namespace Mark
{
    string name = "Adam Toth";
    int age = 31;
    int favorite_number = 7;
    int sum_age();
}

namespace Maria
{
    string name = "Adam Toth";
    int age = 31;
    int favorite_number = 7;
    int sum_age();
}

int sum_age(){
    int sum = 0;
    sum = Mark::age + Maria::age;

    return sum;
}

int main()
{
    cout << sum_age() << endl;

    return 0;
}
