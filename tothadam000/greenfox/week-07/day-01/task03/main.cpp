#include <iostream>
#include <stdexcept>
using namespace std;

// Write a try - catch block.
// Throws a built-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main() {

    try {
        throw runtime_error("This is a runtime_error test");

    }catch (runtime_error t){
        cout << t.what() << endl;
    }

	return 0;
}
