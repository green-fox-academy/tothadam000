#include <iostream>
using namespace std;
//Try to run the following code!

int main () {

    int int_array[5] = {1, 2, 3, 4, 5};
    int size_array = sizeof int_array / sizeof(int) ;
    int index = 2;

    try {
        if (index > size_array - 1){
            throw 1;
        }
        else{
            cout << int_array[index] << endl;
        }

    }
    catch (int error){
        cout << "error massage: " << error << " = nice try honey!!!" << endl;
    }
    //cout << int_array[200];

    return 0;
}

//The program should compile but crash!
//Create a solution for this problem using try-catch block!
