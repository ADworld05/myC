//multiply numbers using for loop

#include <stdio.h>

int main()
{
    int ask, n, i = 1, sum = 1;
    printf("Enter how mant numbers to multiply :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1)
    {
        printf("Enter a number to MULTIPLY :\n");
        scanf("%d", &ask);
        sum = sum * ask;
    }

    printf("The PRODUCT is %d", sum);
    return 0;
}