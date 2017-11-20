#include <iostream>
using namespace std;

// Create a function which has two int parameters
// It should divide them, but if the divider is 0
// It should throw an exception
// In the main use it in a try - catch block

int main() {
    //int a = 5;
    //int b = 2;

    try {
        divider_function(int error);
    }catch (int error){
        cout << "not allowed number" << endl;
    }
    return 0;
}
int divider_function(int x, int y){
    int x = 5;
    int y = 0;

    if (y == 0){
        throw 0;
    }
    else
        cout  <<  x / y << endl;
}
