/* pattern  1
            1 2
            1 2 3  */

#include <stdio.h>

int main()
{
    int row, i, j, num;
    printf("Enter no of rows: \n");
    scanf("%d", &row);
    
    for (int i = 1; i <= row; i++) // iterates rows
    {
        for (int j = 1; j <= i; j++) // iterates n in each  row
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    //using 4 variables    

    // for (int i = 1; i <= row; i++) // i iterates rows
    // {
    //     for (int num = 1, j = 0; j < i; num++, j++) // j iterates n in each  row
    //     {
    //         printf("%d ", num);
    //     }

    //     printf("\n");
    // }

}
