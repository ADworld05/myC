/* pattern      *
              * *
            * * *  */

#include <stdio.h>

int main()
{
    int row, i, j; // rows starts from counter 0
    printf("Enter no of rows: \n");
    scanf("%d", &row);

    for (int i = 0; i < row; i++) // i iterates rows ; starts from 0
    {
        for (int j = 0; j < row; j++) // j iterates columns ; starts from 0
        {
            if (i + j >= row - 1)
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

    return 0;
}
