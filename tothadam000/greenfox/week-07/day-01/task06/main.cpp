#include <iostream>
#include <stdexcept>
using namespace std;

// Create a function which throws a bulit-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void throw_func()throw (runtime_error);
int main() {
    try {
        throw_func();
    }catch (runtime_error t){
        cout << t.what() << endl;
    }
	return 0;
}
void throw_func()throw (runtime_error){
    throw runtime_error("This is a runtime_error test");
}
