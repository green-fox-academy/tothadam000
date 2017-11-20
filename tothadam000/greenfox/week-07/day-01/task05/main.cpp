#include <iostream>
using namespace std;

// Create a function which throws a char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void throw_func();
int main() {
    int trynum = 10;
    int divnum = 0;

    try {
        if (divnum == 0){
        throw_func();
        }else {
        cout << trynum / divnum << endl;
        }
    }catch (char error){
        cout << error << endl;
    }
    return 0;
}
void throw_func(){
    throw 'x';
}

