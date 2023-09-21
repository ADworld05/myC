// power(a,b) = a**b function 

#include <stdio.h>

int exponential(int a, int b)
{
    int val=1;
    for (int i = 1; i <= b; i++)
    {
        val=val*a;
    }
    return val;
    
}

int main(){

int a,b;
printf("Enter number :\n");
scanf("%d", &a);
printf("Enter exponential :\n");
scanf("%d", &b);
printf("%d exponential %d : %d ",a,b,exponential(a,b));

}