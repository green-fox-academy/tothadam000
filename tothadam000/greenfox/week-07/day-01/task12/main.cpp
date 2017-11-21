#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segment in a new try-catch block.


const char *func(int n, const char* sentence){
    if (n > 5) {
        throw (n - 5);
    }if (n < 0){
        throw "This is a neg num";
    }
    return &sentence[n];
}
int main(){
    const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};

    cout << "Type a number" << endl;
    try {
        int n = 0;
        cin >> n;
        cout << func(n, *sentence);
        }catch (int error) {
            cout << "error massage: " << error << endl;
        }catch (const char *error) {
            cout << "error massage: " << error << endl;
        }
}
