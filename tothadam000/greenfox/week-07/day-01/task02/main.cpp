#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {

    try {
        int trynum = 10;
        int divnum = 0;

        if ( divnum == 0){
            throw 'x';
       }
       int div = trynum / divnum;
       cout << div << endl;
    }
    catch(char error){
        cout << "error is: "<< error << endl;
        cout<< "you can not devide by zero!" << endl;
    }
    return 0;
}
