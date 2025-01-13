// lcm of two numbers

#include <stdio.h>

int lcm(int a, int b)   //a>b
{
    for (int i = 1 ; ; i++)
    {
        if ((a*i)%b==0)
        {
            return a*i;
        }
    }  
}

int main()
{
    int a,b,c;
    printf("Enter 2 numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);

    c=lcm(a,b);

    printf("the lcm of %d and %d is %d",a,b,c);

    return 0;    
}