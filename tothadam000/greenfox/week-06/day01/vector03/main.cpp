#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
  //remove the even numbers, then print the items again

    vector <int> int_vector;
    int size = 20;

    for(unsigned int i = 0; i < size; ++i){
        int_vector.push_back(rand() % 10);

        if (int_vector[i] % 2 ==0){
        cout << int_vector[i] << endl;
        }
    }

    return 0;
}
