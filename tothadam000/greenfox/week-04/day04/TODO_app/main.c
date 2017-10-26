#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name [255];
    unsigned char prio;
    unsigned char check;
};

void welcome_screen();
void add_new_task(todo_t task_name, char *name);
int task_number = 0;
int main()
{
    char command [255];
    todo_t todo[100];
    welcome_screen();
    while (1){
        gets(command);
            char *tok1 = strtok(command, " ");
            char *tok2 = strtok(NULL, " ");
            if(strcmp(tok1, "-a")){
                add_new_task();
            }
    }

    return 0;
}
void welcome_screen(){
    printf("\tTodo application\n"
"====================================\n"
"Commands:\n"
" -a   Adds a new task\n"
" -wr  Write current todos to file\n"
" -rd  Read todos from a file\n"
" -l   Lists all the tasks\n"
" -e   Empty the list\n"
" -rm  Removes a task\n"
" -c   Completes a task\n"
" -p   Add priority to a task\n"
" -lp  Lists all the tasks by priority\n");
}
void add_new_task(todo_t task_name, char *name){

}


