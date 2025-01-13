// find the sum of 1 + 1/2 + 1/3 + 1/4..... using loop

#include <stdio.h>

int main()
{
    int num, i;
    float sum = 0;
    printf("Enter the number of terms :\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num == 1)
        {
            printf("the sum upto %d terms is %d", num, 1);
        }
        else
        {
            sum += 1 / (float)i;
        }
    }
    printf("the sum upto %d terms is %f", num, sum);
    return 0;
}