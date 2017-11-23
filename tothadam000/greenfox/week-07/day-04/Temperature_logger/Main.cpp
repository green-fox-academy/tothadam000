#include <iostream>
#include <string>
#include <vector>

#include "SerialPortWrapper.h"

using namespace std;
void display_screen();
int main()
{

    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection


        string line;
        vector<string>datas;
        string userInput;
        int portOpen = 0;

        display_screen();


        while(1){
            cin >> userInput;
            if (userInput == "e") {
                break;
            }else if (userInput == "o"){
                if (portOpen == 0){
                serial->openPort();
                cout << "Port opened." << endl;
                portOpen = 1;
               }else if(portOpen == 1){
                    cout << "Its already opened you moron!" << endl;
                }

            }else if (userInput == "c"){
                serial->closePort();
                portOpen = 0;
                cout << "Port closed." << endl;
            }else if (userInput == "s"){
                serial->readLineFromPort(&line);
                if (line.length() > 0){
                    datas.push_back(line);
                }
            }/*else if (userInput == "l"){
                for (int i = 0; i < datas.size(); ++i) {
                    cout << datas.at(i) << endl;
                }
            }*/
        }


    return 0;
}
void display_screen(){
    cout << "      Temperature Logger Application" << endl << endl;
    cout << "=========================================" << endl;
    cout << " Commands:" << endl << endl;
    cout << " h        Show command list" << endl;
    cout << " o        Open port" << endl;
    cout << " s        Start logging / Stop logging" << endl;
    cout << " c        Close port" << endl;
    cout << " l        List after error handling" << endl;
    cout << " e        Exit from the program" << endl << endl;
}
