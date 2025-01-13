//program to compare 3 diffrent numbers and print the middle number 5

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 diffrent numbers :\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && c > a) || (a>c && b>a) ) //check a is middle number
    {
       
        printf("The middlle number is %d \n", a);
    }
    else if ((b > a && c > b) || (b>c && a >b))
    {
        printf("The middle number is %d\n", b);
    }
    else
    {
        printf("The greatest number is %d\n", c);
    }
    return 0;
}