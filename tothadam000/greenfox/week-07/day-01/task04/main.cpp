#include <iostream>
using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void throw_func(int divnum, int trynum);
int main() {
    int trynum = 10;
    int divnum = 5;

    try {
        throw_func(divnum, trynum);
    }catch (int error){
        cout << error << endl;
    }

	return 0;
}
void throw_func(int divnum, int trynum){
    if (divnum == 0){
        throw 1;
       }
    else
        cout << trynum / divnum << endl;
}
