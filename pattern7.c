/* print pattern   * * *
                   * *
                   *       */

#include <stdio.h>
int main()
{
    int row, i, j;
    printf("Enter no of rows: \n");
    scanf("%d", &row);

    for (int i = 0; i < row; i++) // i iterates rows
    {
        for (int j = 0; j < row; j++) // j iterates columns
        {
            if (i+j <=(row-1))
            {
                printf("* ");
            }

            else  
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}