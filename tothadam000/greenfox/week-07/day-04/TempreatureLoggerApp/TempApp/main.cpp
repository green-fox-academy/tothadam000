#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <regex>

#include "SerialPortWrapper.h"

using namespace std;                                                                        //((0-9)|([1]\\(0-9))|(2\\(0-9)|(3\\(0|1))((0-9)|(1\\(0-9))|(2\\(0-3)))\\:((1-9)|((1-5)(0-9)))\\:((1-9)|((1-5)(0-9))).\\d
void displayScreen();
int main()
{
   /* regex pattern("1998.7.8");
    string ex = ("^(19\\d\\d|(20(0[0-9])|(1(0-7))))..*");

    if (regex_match(ex.c_str(), pattern))
        cout << ex << endl;*/
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) <<endl;
    }

    // connection


        string line;
        vector<string>datas;
        string userInput;
        int portOpen = 0;
        int startLog = 0;
        regex pattern("(19\\d\\d)|(20((0[0-9])|(1[0-7])))\\.(([1-9])|(1[0-2]))\\.(([1-9])|([1-2][0-9])|(3[0-1]))\\s(([0-9])|(1[0-9])|(2[0-3])):(([0-9])|([1-5][0-9])):(([0-9])|([1-5][0-9])).-*([0-9]|([1-9][0-9])|([1-9][0-9]{2}))");
        smatch sm;

        displayScreen();
        SerialPortWrapper *serial = new SerialPortWrapper("COM6", 115200);
        while(1){
            cin >> userInput;
            if (userInput == "e") {
                break;
            }else if (userInput == "h"){
                displayScreen();
            }else if (userInput == "o"){
                if (portOpen == 0){
                serial->openPort();
                cout << "Port opened." << endl;
                portOpen = 1;
               }else if(portOpen == 1){
                    cout << "It's already opened you moron!" << endl;
                }
            }else if (userInput == "c"){
                serial->closePort();
                portOpen = 0;
                cout << "Port closed." << endl;
            }else if (userInput == "s"){
                if (startLog == 1){
                    cout << "Logging is already started you moron!" << endl;
                }else if (startLog == 0){
                    cout << "Start logging." << endl;
                    while (1){
                        serial->readLineFromPort(&line);
                        startLog = 1;
                        if (line.length() > 0){
                            //cout << regex_match(line, pattern)<< endl;
                             if (regex_match(line, pattern)){

                                datas.push_back(line);

                             }
                        }
                        if (_kbhit()){
                            if (_getch() == 's'){
                                serial->closePort();
                                portOpen = 0;
                                cout << "Port closed." << endl;
                                startLog = 0;
                                break;
                            }
                        }
                    }
                }
        }else if (userInput == "l"){
                for (int i = 0; i < datas.size(); ++i) {
                    cout << datas.at(i) << endl;
                }
            }else
                cout << "Unknown command!" << endl;
        }
    return 0;
}
void displayScreen(){
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

