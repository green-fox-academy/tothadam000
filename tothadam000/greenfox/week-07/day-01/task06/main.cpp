#include <iostream>
#include <stdexcept>
using namespace std;

// Create a function which throws a built-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void throw_func(int divnum, int trynum);
int main() {
    int trynum = 10;
    int divnum = 0;

    try {
        throw_func(divnum, trynum);
    }catch (runtime_error error){
        cout << error.what() << endl;
    }
    return 0;
}
void throw_func(int divnum, int trynum){
    if (divnum == 0){
        throw runtime_error("This is a runtime_error test");
       }
    else
        cout << trynum / divnum << endl;
}
