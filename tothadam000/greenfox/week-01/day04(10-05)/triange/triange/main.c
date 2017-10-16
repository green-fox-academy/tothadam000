#include <stdio.h>

/*create a simple program which generates a triangle like this:
1
22
333
4444
55555
666666
7777777
if you change the rows variable the output should be different as well
*/
int main()
{
	int rows;
	int n;
    int i;

    printf("Row s:");
    scanf("%d", &rows);

	for(i = 1; i <= rows; i++)
	{
        for(n = 1; n <= i; n++)
        {
            printf("%d", rows);
        }
        printf("\n");
	}
	return 0;
}
