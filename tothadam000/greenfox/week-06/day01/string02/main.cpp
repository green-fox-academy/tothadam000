#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string name = "Adam Toth";
    int age = 31;
    double height = 1.86;
    bool married = false;

    cout << "Your name: " <<name << endl;
    cout << "Your age: " << age << endl;
    cout << "Your height: " <<height << endl;

    if (married)
        cout<<"Is married: true"<< endl;
    else
        cout<<"Is married: false"<< endl;

    return 0;
}
