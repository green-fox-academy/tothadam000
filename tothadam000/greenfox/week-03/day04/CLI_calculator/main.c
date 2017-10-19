#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    welcome_screen();

    return 0;
}

void welcome_screen()
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

}
/*{
    while(strcmp(command, "exit") != 0){
            switch
                case
                case
                case
                default continue
}*/
