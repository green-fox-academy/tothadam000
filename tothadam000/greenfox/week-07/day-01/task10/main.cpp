#include <iostream>
#include <stdexcept>
using namespace std;

/**
 * Create a function that prints out the first "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

void even_number (int number);

int main() {

    int user_number = 0;

    cout << "Please type the 'N' positive number: " << endl;
    cin >> user_number;

    try {
    even_number(user_number);
    }catch (runtime_error &error) {
        cout << error.what();
    }
  return 0;
}
void even_number (int number) {

    int i = 0;

    if (number < 0){
        throw runtime_error ("This is not positive!");
    } else {
        for (i = 0; i < number; i++)
            cout << i*2 << ",";
    }
}
