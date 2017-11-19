#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {

  /*  try {
        char test_char = 'x';
            throw test_char;
    }catch (char t){
        cout << t << endl;
    }*/

    try {
        char test_char[] = "test";
            throw test_char;
    }catch (char *t){
        cout << t << endl;
    }

	return 0;
}
