/* pattern    *
            * * *
          * * * * *    */


#include <stdio.h>

int main()
{

    int row, i, j; // rows starts from counter 0
    printf("Enter no of rows: \n");
    scanf("%d", &row);

    for (int i = 0; i < row; i++) // i iterates rows ; starts from 0
    {
        for (int j = 0; j < (2 * row + 1); j++) // j iterates columns ; starts from 0; 2n+1 columns
        {
            if (j >= (row - i) && j <= (row + i)) //  print * if j lies betweem (row-i) & (row+i)
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
