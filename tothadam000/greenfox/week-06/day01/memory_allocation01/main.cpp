#include <iostream>

using namespace std;

// Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
// Please delete the array before the program exits

int main() {
    int *pointer = NULL;
    pointer = new int[5];
    int i;

    for (i = 0; i < 5; ++i) {
        pointer[i] = i;
    }
    cout << "Numbers of the array: " << endl;

    for (i = 0; i < 5; ++i){
        cout << pointer[i] << endl;
    }
    delete [] pointer;

    return 0;
}
