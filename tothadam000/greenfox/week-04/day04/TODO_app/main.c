#include <stdio.h>
#include <stdlib.h>

void welcome_screen();
int main()
{
welcome_screen();

    return 0;
}
void welcome_screen(){
    printf("\tTodo application\n"
"====================================\n"
"Commands:\n"
" -a   Adds a new task\n"
" -wr  Write current todos to file\n"
" -rd  Read todds from a file\n"
" -l   Lists all the tasks\n"
" -e   Empty the list\n"
" -rm   Removes a task\n"
" -c   Completes a task\n"
" -p   Add priority to a task\n"
" -lp  Lists all the tasks by priority\n");
}
