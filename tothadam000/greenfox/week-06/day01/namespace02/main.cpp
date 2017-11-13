#include <iostream>
#include <string>
// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

using namespace std;
namespace Person
{
    string name = "Adam Toth";
    int age = 31;
    int favorite_number = 7;
}
int main()
{
    using namespace Person;

    cout << name << endl << age << endl << favorite_number << endl;

    return 0;
}
