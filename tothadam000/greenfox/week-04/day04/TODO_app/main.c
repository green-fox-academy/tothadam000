#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void welcome_screen();

int task_counter = 0;

typedef struct {
    char name [255];
    unsigned char prio;
    unsigned char check;
} todo_t;

void add_new_task(todo_t *task_name, char *name);

int main()
{
    char command [255];
    todo_t todo[100];
    welcome_screen();
    while (1){
        gets(command);
        char *tok1 = strtok(command, " ");
        char *tok2 = strtok(NULL, " ");

        if(strcmp(tok1, "-a")== 0){
            printf("ok");
        }
        else if(strstr(command, "-wr")== 0){

            task_counter++;
            printf("write");
        }
        else if(strcmp(tok1, "-rd")== 0){
            printf("read");
        }
        else if(strcmp(tok1, "-l")== 0){
            printf("list");
        }
        else if(strcmp(tok1, "-e")== 0){
            printf("empty");
        }
        else if(strcmp(tok1, "-rm")== 0){
            printf("removes");
        }
        else if(strcmp(tok1, "-c")== 0){
            printf("Add priority");
        }
        else if(strcmp(tok1, "-p")== 0){
            printf("Lists all the tasks");
        }
        else if(strcmp(tok1, "-lp")== 0){
            printf("read");
        }
        // add_new_task();
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
void add_new_task(todo_t *task_name, char *name){
    strcpy(task_name[task_counter].name, name);

}


