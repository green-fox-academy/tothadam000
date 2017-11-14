#include <iostream>
#include <string>

using namespace std;

class Pirate {
    private:
        unsigned int rum;

    public:
        Pirate(unsigned int rum){
            this->rum = rum;
        }
        ~Pirate(){
            cout <<"Bye Hacker!" << endl;
        }
        void drink_rum (){
            rum = rum +1;
            if (rum >= 5){
                hows_goin_mate();
            }
            else
                cout << "Nothin'" << endl;
        }
        void hows_goin_mate (){
            cout << "Arrrrrrrrr!" << endl;
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

    Pirate po(3);

    po.drink_rum();
    po.drink_rum();
    po.drink_rum();


  return 0;
}
