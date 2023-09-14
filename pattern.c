/* print pattern  *
                  * *
                  * * *      */

#include <stdio.h>
int main()
{
    int row, i, j;
    printf("Enter no of rows: \n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) //iterates rows
    {
        for (int j = 0; j < i; j++)  //iterates no of * in a row
        {
            printf("* ");
        }
        printf("\n");
    }
}