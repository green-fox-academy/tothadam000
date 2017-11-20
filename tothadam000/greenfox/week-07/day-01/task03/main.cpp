#include <iostream>
#include <stdexcept>
using namespace std;

// Write a try - catch block.
// Throws a built-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

    try {
        int trynum = 10;
        int divnum = 5;

        if ( divnum == 0){
            throw runtime_error("You can not divide by zero!");
    }
        //int div = trynum / divnum
       cout << trynum / divnum << endl;
    }
    catch(runtime_error &error){
        cout << error.what() << endl;
    }
    return 0;
}
