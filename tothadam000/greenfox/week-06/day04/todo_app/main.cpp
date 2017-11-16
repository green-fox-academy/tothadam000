#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*class todos{
        private:
        string task[];
        add_new_task();
        list_tasks();


};*/
class valami{
    public:
    void print_welcome_screen(){
        cout << "\tTodo application" << endl
        << "============================== " << endl
        << "Commands:" << endl
        << "-a   Adds a new task" << endl
        << "-wr  Write current todos to file" << endl
        << "-rd  Read todos from a file" << endl
        << "-l   Lists all the tasks" << endl
        << "-e   Empty the list" << endl
        << "-rm   Removes a task" << endl
        << "-c   Completes a task" << endl
        << "-p   Add priority to a task" << endl
        << "-lp  Lists all the tasks by priority " << endl << endl;}
};


vector<string> taskVector;
string command = "";
string task = "";
void add_new_task();
int main() {
    valami object;
    object.print_welcome_screen();

    cin >> command;
    if (command == "-a"){
        add_new_task();
    }
    return 0;
}
void add_new_task(){
    cin >> task;
    taskVector.push_back(task);
    cout << taskVector[0] << endl;
    }
