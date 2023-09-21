// program to reverse a given number

#include <stdio.h>

int main()
{
    int num, rev = 0, rem, copyNum;
    printf("Enter a number :\n");
    scanf("%d", &num);
    copyNum = num;

    while (num != 0)
    {
        rem = num % 10;          //extact last digit
        rev = rev * 10 + rem;    //create reverse number with digits
        num = num / 10;          //remove last digit from num
    }

    printf("The reverse of %d is %d", copyNum, rev);

    return 0;
}