#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Todos{
    protected:
        vector<string> taskVector;
        vector<int> priorityVector;

        string task = "";
        int priority = 0;

    public:
        void add_new_task(){
            cin >> task;
            taskVector.push_back(task);
            for (unsigned int i = 0; i < taskVector.size(); ++i){                  //debug
            cout << taskVector[i] << endl;
           }
        }
        void add_priority(){
            cin >> priority;
            priorityVector.push_back(priority);
            for (unsigned int i = 0; i < priorityVector.size(); ++i){             //debug
            cout << priorityVector[i] << taskVector[i] << endl;
           }
        }
       /* void list_all_task(){

        }*/
};
class Engine: public Todos{
    protected:
        string command = "";
        Todos todos_ojbect;
    public:
        void program_engine(){
            while (1){
                cin >> command;
                if (command == "-exit"){
                    cout << command;
                    break;
                }else if (command == "-a"){
                todos_ojbect.add_new_task();
                //cout << "test";                                               //debug
                }else if (command == "-p"){
                todos_ojbect.add_priority();                                    //debug
                //cout << "test2";
                }
            }
        }
};

class Welcome{
    public:
        void print_welcome_screen(){
            cout << "\tTodo application" << endl
            << "============================== " << endl
            << "Commands:" << endl
            << "-a     Adds a new task" << endl
            << "-wr    Write current todos to file" << endl
            << "-rd    Read todos from a file" << endl
            << "-l     Lists all the tasks" << endl
            << "-e     Empty the list" << endl
            << "-rm    Removes a task" << endl
            << "-c     Completes a task" << endl
            << "-p     Add priority to a task" << endl
            << "-lp    Lists all the tasks by priority " << endl
            << "-exit  Exit from the program" << endl << endl;}
};

int main() {
    Welcome welcome_object;
    welcome_object.print_welcome_screen();


    Engine engine_object;

    engine_object.program_engine();
    //engine_object.add_new_task();
    //engine_object.add_priority();
    //todos_ojbect.program_engine();
    //todos_ojbect.add_new_task();
    //todos_ojbect.add_priority();
    return 0;
}

