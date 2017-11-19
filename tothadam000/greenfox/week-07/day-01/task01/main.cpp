#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
    int _try = 10;

    try {
            throw _try;
    }catch (int t){
        cout << t << endl;
    }


	return 0;
}
