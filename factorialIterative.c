// to find factorial of a number using iteration

#include <stdio.h>


int factorialIter(int a){
    
    int result = 1;

    if (a == 0 || a == 1)
    {
        return 1;
    }

    else
    {
        for (int i = 2; i <= a; i++)
        {
            result = result * i;
        }        
    }
    return result;
}


int main(){
    
    int num;
    printf("Enter a number to find the factorial :\n");
    scanf("%d",&num);

    printf("The factorial of %d is %d ",num,factorialIter(num));

    return 0;
}