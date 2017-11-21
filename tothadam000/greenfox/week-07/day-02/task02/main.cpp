#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.
string func(string a,string b );
string func(string a,string b,string c );
string func(string a,string b,string c, string d);
int main() {
    string a = "Hello ";
    string b = "Adam ";
    string c = ", ";
    string d = "Whats Up?";

    cout << func( a, b ) << endl;
    cout << func( a, b, c ) << endl;
    cout << func( a, b, c,  d) << endl;

	return 0;
}
string func(string a,string b ){
    return a + b;
}
string func(string a,string b,string c ){
    return a + b + c;
}
string func(string a,string b,string c, string d){
    return a + b + c + d;
}
