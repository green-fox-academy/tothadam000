#include <iostream>
#include <stdexcept>
using namespace std;

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int get_fibonacci_number(int n){
    if(n < 1){
        throw runtime_error("only natural nums allowed");
    }
    int a = 0;
    int b = 1, c, i;
    if( n == 0)
        return a;
    for (i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
  return b;
}

int main (){
    int n = 0;
    cin >> n;

    try {
        cout << get_fibonacci_number(n) << endl;
        }catch(runtime_error &error){
            cout << error.what();
        }
  return 0;
}
