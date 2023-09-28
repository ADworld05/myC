//print fibonacci series using recursion

#include <stdio.h>

int fib_recursive(int n)
{
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}

int main(){

    int var,c;
    printf("Enter the range of the series :\n");
    scanf("%d",&var);

    for (int i = 0; i < var; i++)
    {
        c=fib_recursive(i);
        printf("%d\n",c);
    }
    
}





