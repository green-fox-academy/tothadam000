#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*class UserDatas{
    private:
        string name;
        string pinCode;
        float money;
    public:
        UserDatas(){

        }

        bool checkPinCode(){

        }
        void getRichest(){
        }

};
class Admin: private UserDatas {
};

class Costumer: private UserDatas {
    withdrawMoney()
};

class ATM{
    private:
        int _20t;
        int _10t;
        int _5t;
        int _2t;
        int _1t;
        int sumOfMoney;

    public:
        ATM(int _20t,int _10t, int _5t,int _2t, int _1t){
            _20t = _20t;
            _10t = _10t;
            _5 = _5t;
            _2 = _2t;
            _1 = _1t;
        }
        void registerUser()
};*/

vector<int> banknotes;


void load_ATM(){
    int note;

    for (int i = 0; i < 5; i++) {
        cout << "load me up!!!: " << endl;
        cin >> note;
        banknotes.push_back(note);
    }
    cout << "Returning to main admin menu";

}

void print_num_of_banknotes(){
    for (int i = 0; i < 5; i++) {
        switch (i)
        {
        case 0:
            cout << "20000-esek szama: " << banknotes.at(i) << endl;
            break;
        case 1:
            cout << "10000-esek szama: " << banknotes.at(i) << endl;
            break;
        case 2:
            cout << "5000-esek szama: " << banknotes.at(i) << endl;
            break;
        case 3:
            cout << "2000-esek szama: " << banknotes.at(i) << endl;
            break;
        case 4:
            cout << "1000-esek szama: " << banknotes.at(i) << endl;
            break;
        }
    }
}


int main()
{
    string userInput;
    string name;
    string password;
    string command;
    char state = 0;
    while(1) {
        cin >> userInput;
        if (userInput == "e" && state == 0) {
            break;
        } else if (userInput == "admin") {
            cout << "Give me your name: " << endl;
            cin >> name;
            cout << "Give me your password: " << endl;
            cin >> password;

            cout << "What do you want to do?: " << endl;
            cout << "Loading up the ATM with banknotes: type in 'load'." << endl;
            cout << "Getting the ATM balance: type in 'balance'." << endl;

            cin >> command;
            if (command == "load") {
                load_ATM();
            } else if (command == "balance") {
                print_num_of_banknotes();
            } else {
                cout << "else" << endl;
            }
        } else if (userInput == "customer") {
            cout << "cust!" << endl;
        } else {
            cout << "cust else!" << endl;
        }

    }
    return 0;
}
