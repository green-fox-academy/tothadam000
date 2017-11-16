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
    int_vector.reserve(20);
    //int size = 20;
    int i = 0;

    for(i = 0; i < int_vector.capacity(); ++i){
        int_vector.push_back(rand() % 10);
        cout << int_vector [i] << endl;
    }
    cout << "--------------------" << endl;
    for(i = 0; i < int_vector.size(); ){
        if (int_vector[i] % 2 == 0){
           int_vector.erase(int_vector.begin()+i);
        }
       else{
            cout << int_vector[i] << endl;
            i++;
        }

    }

  /*  for (unsigned int i = 0; i < int_vector.size(); ++i)}
    cout << ' ' << int_vector[i];
    cout << '\n';*/


    return 0;
}
