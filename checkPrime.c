// program to check a number is prime or not

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);

    if (num == 2)
    {
        printf("%d is a Prime number",num);        
    }

    for (int i = 2; i*i < num; i++)     //
    {             
        if (num%i == 0)
        {
            printf("%d is not a Prime number",num);
            return 0;       //return 0 = exits prematurely (exit main function)
            
        }
        
    }
    printf("%d is a Prime number",num);       
    return 0;
}