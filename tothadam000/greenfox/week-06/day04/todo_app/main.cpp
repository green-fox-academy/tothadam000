#include <iostream>
#include <string>
#include <vector>

using namespace std;

class todos{
    public:
        vector<string> taskVector;
        vector<int> priorityVector;
        string command = "";
        string task = "";
        int priority = 0;
        //void add_new_task();
       // void add_priority();

        void loop_the_program(){
            while (1){
                cin >> command;
                if (command == "-exit"){
                   break;
                 }else if (command == "-a"){
                    add_new_task();
                 }else if (command == "-p"){
                    add_priority();
                 }
            }
        }

        void add_new_task(){
            cin >> task;
            taskVector.push_back(task);
            /*for (unsigned int i = 0; i < taskVector.size(); ++i){
            cout << taskVector[i] << endl;
            }*/
            }
        void add_priority(){
            cin >> priority;
            priorityVector.push_back(priority);
            //for (unsigned int i = 0; i < priorityVector.size(); ++i){
            // cout << priorityVector[i] << taskVector[i] << endl;                     //paraszt debug
            // }
            }
};

class welcome{
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
    welcome welcome_object;
    welcome_object.print_welcome_screen();

    todos todos_oject;
    todos_oject.loop_the_program();
    todos_oject.add_new_task();
    todos_oject.add_priority();
    return 0;
}

