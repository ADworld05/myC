//find the sum upto given num using for loop

#include <stdio.h>

int main()
{
    int i, num, sum = 0;
    printf("Enter a number : \n");
    scanf("%d", &num);

    for (i = 0; i <= num; i += 1)
    {
        sum = sum + i;
    }
        printf("The sum upto %d is %d\n", num, sum);
        return 0;
    
}
