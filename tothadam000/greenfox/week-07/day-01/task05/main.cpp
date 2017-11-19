#include <iostream>
using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

char test_char[] = "test string in array";
void throw_func()throw (char*);
int main() {
    try {
        throw_func();
    }catch (char *t){
        cout << t << endl;
    }
	return 0;
}
void throw_func()throw (char*){
    throw test_char;
}
