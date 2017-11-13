#include <iostream>
#include <string>
#include <vector>


using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main()
{
    vector <int> int_vector;

    int_vector.push_back(1);
    int_vector.push_back(2);
    int_vector.push_back(3);
    int_vector.push_back(4);
    int_vector.push_back(5);

    cout << int_vector[3] << endl;

    return 0;
}
