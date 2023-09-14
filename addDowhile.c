//find the sum upto given num using do while loop

#include <stdio.h>

int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a number :\n");
    scanf("%d", &n);
    do{
        sum = sum + i;
        i += 1;
        }while (i <= n);
        
        printf("The sum upto %d is %d", n, sum);
        return 0;
    
}