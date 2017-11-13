#include <iostream>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string myName = "Adam Toth";
    int myAge = 31;
    bool likeCaffe = true;

    cout << myName<<endl;
    cout << myAge<<endl;

    if (likeCaffe)
        cout<<"Likes coffee: true";
    else
        cout<<"Likes coffee: false";
    return 0;
}
