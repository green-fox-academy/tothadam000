#include <iostream>
#include <string>

using namespace std;

class Pirate {
    private:
        int calls = 0;
    public:
        void drink_rum(int d){
            calls += d;
        }
        void hows_goin_mate(){
            if (calls >= 5){
                cout << "Arrrrr!";
            }else {
                cout << "Nothin";
            }
        }
};
int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate p;

    p.drink_rum(6);

    p.hows_goin_mate();

  return 0;
}
