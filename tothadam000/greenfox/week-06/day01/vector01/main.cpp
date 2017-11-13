#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print all elements of it
    vector <int> int_vector;
    int size = 10;

    int_vector.push_back(1);
    int_vector.push_back(2);
    int_vector.push_back(3);
    int_vector.push_back(4);
    int_vector.push_back(5);

    for (unsigned int i = 0; i < int_vector.size(); ++i){
        cout << int_vector[i] << endl;
    }

  return 0;
}
