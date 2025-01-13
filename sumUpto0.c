#include <stdio.h>

int main()
{
    int total = 0;

    while (1)
    {
        int num;
        printf("enter a number");
        scanf("%d", &num);

        if (num != 0)
        {
            total += num;           
        }
        else
        {
            printf("%d", total);
            return 0;
        }
    }
}