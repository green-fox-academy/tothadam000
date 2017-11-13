#include <iostream>

using namespace std;

// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentense using these variables
// free the allocated memory


int main() {
    int *p_age = NULL;
    p_age = new int (31);
    string *p_name = NULL;
    p_name = new string ("Adam Toth");
    int *p_slice_of_pizza_you_can_eat = NULL;
    p_slice_of_pizza_you_can_eat = new int (7);

    cout << *p_age << endl;
    cout << *p_name << endl;
    cout << *p_slice_of_pizza_you_can_eat << endl;

  return 0;
}
