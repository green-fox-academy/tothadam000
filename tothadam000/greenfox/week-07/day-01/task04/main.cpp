#include <iostream>
using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws
void throw_func()throw (int);
int main() {
    try {
        throw_func();
    }catch (int t){
        cout << t << endl;
    }
	return 0;
}
void throw_func()throw (int){
    throw 5;
}
