// c program to print first n odd terms 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 0; i < 2*n; i++)  //2*n @ check in first 2n integers
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        
    }
}
