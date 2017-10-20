#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

    void welcome_scr();
    void set_cursor_pos(int x, int y);
    COORD coord = {0,0};
    const char plus[] = " + ";
    const char minus[] = " - ";
    const char star[] = " * ";
    const char slash[] = " / ";
    void sum();
    void sub();
    void multi();
    void divi();

int main()
{
    char command[50];
    char *op_1, *op_2;
    float input_1, input_2;
    float result;
    welcome_scr();
    set_cursor_pos(5, 5);


    while (strcmp(command, "exit") != 0) {
           gets (command);
            if (strcmp(command, "clear") == 0) {
               system("cls");
           }
            if (strcmp(command, "help") == 0){
                welcome_scr();
            }
            if (strstr(command, "+") != 0) {
                sum(command);
            }
            if (strstr(command, "-") != 0){
                sub(command);
            }
            if (strstr(command, "*") != 0){
                multi(command);
            }
            if (strstr(command, "/") != 0){
                divi(command);
            }
    }

    return 0;
}


    void welcome_scr()
{
        printf("\tI'm the CLI Calculator\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n");
    printf("+\t summation\n");
    printf("-\t subtraction\n");
    printf("*\t multiplication\n");
    printf("/\t division\n");
    printf("\t division with remainder\n");
    printf("^\t squaring\n");
    printf("<\t square root\n");
    printf("log\t logarithm\n");
    printf("binto\t binary to hex or dec\n");
    printf("hexto\t hexadecimal to bin or hex\n");
    printf("decto\t decimal to bin or hex\n");
    printf("====================================\n");
    printf("exit\t exit from the program\n");
    printf("clear\t clear the screen\n");
    printf("help\t print usage\n");
    printf("====================================\n");
    printf("\tPress enter to start!\n");
    printf("====================================\n");
        getchar();
        system("cls");
}


    void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

    void sum(char(command[])){

    //char command[50];
    char *op_1, *op_2;
    float input_1, input_2;
    float result;

    op_1 = strtok(command, plus);
    op_2 = strtok(NULL, plus);

    input_1 = atof (op_1);
    input_2 = atof (op_2);

    result = input_1 + input_2;

        printf("The sum of these two numbers is: %.2f.", result);
}

    void sub(char(command[])){

    //char command[50];
    char *op_1, *op_2;
    float input_1, input_2;
    float result;

    op_1 = strtok(command, minus);
    op_2 = strtok(NULL, minus);

    input_1 = atof (op_1);
    input_2 = atof (op_2);

    result = input_1 - input_2;

        printf("The subtraction of these two numbers is: %.2f.", result);
}

    void multi(char(command[])) {
    char *op_1, *op_2;
    float input_1, input_2;
    float result;

    op_1 = strtok(command, star);
    op_2 = strtok(NULL, star);
    //printf("op_1: %f, \t op_2: %f", op_1, op_2);
    input_1 = atof (op_1);
    input_2 = atof (op_2);

    result = input_1 * input_2;

        printf("The multiplication of these two numbers is: %.2f.", result);
}
    void divi(char(command[])) {
    char *op_1, *op_2;
    float input_1, input_2;
    float result;

    op_1 = strtok(command, slash);
    op_2 = strtok(NULL, slash);

    input_1 = atof (op_1);
    input_2 = atof (op_2);

    result = input_1 / input_2;

        printf("The division of these two numbers is: %.2f.", result);
}
