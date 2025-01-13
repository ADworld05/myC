// f(n) = 1 + (1+2) + (1+2+3) + ....n terms

#include <stdio.h>

int main()
{
    int terms, i, j, sum=0;    
    int result = 1;
    printf("Enter number of terms :");
    scanf("%d", &terms);

    for (int i = 1; i < terms; i++)
    {
        for (int  j = 1; j <= (i+1); j++)
        {
            sum = sum + j;
        }
        
        result = result + sum;
        sum=0;
       
    }
    printf("f(%d)= %d ",terms, result);
}

