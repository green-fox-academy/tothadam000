#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    //Create a vector of integers
    //reserve place for 10 element, then fill those place with random numbers between 0 and 10

    vector <int> int_vector;
    int size = 10;

    for(unsigned int i = 0; i < size; ++i){
        int_vector.push_back(rand() % 10);
        cout << int_vector[i] << endl;
    }

    return 0;
}
