/* print pattern   1
                   2 2
                   3 3 3 */

#include <stdio.h>

int main()
{
    int row, i, j,num=1;
    printf("Enter no of rows: \n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) // i iterates rows
    {
        for (int j = 0; j < i;  j++) // j iterates n in each  row
        {
            printf("%d ", num);
        }
        num++;

        printf("\n");
    }

}
