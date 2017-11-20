#include <iostream>
using namespace std;

// Create a function which has two int parameters
// It should divide them, but if the devider is 0
// It should throw an exception
// In the main use it in a try - catch block

int divider_function(int x,int y)throw(int);
int main() {
    /*int a = 5;
    int b = 2;*/

    try {
        divider_function(int t);
    }catch (int t){
        cout << "not allowed number" << endl;
    }

	return 0;
}
int divider_function()throw(int){
    int x = 5;
    int y = 2;
   // double div = 0;

    if (y == 0){
        throw 0;
    }
        return x / y;
}
