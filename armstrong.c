// pattern to check a number is armstrong or not

#include <stdio.h>
#include <math.h>

int checkArmstrong(int a)
{
    int len = 0, rem, num = 0;
    int copy1 = a;
    int copy2 = a;

    while (a != 0)
    {
        a = a / 10;
        len = len + 1;
    }

    while (copy1 != 0)
    {
        rem = copy1 % 10;
        num = num + pow(rem, len);
        copy1 = copy1 / 10;
    }

    if (num == copy2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int b;
    printf("Enter a number to check:\n");
    scanf("%d", &b);
    
    if (checkArmstrong(b) == 1)
    {
        printf("%d is an armstrong number", b);
    }
    else if (checkArmstrong(b) == 0)
    {
        printf("%d is NOT a armstrong number", b);
    }
}
