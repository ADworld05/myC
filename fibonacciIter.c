// fibonacci using iterative approach

#include <stdio.h>

void fibonacciIter(int a){
    int t1=0,t2=1,nextterm,i;

    printf("%d\n",t1);
    printf("%d\n",t2);

    for (int i = 2; i < a ; i++)
    {
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        printf("%d\n",nextterm);
    }        
}

int main()
{
    int var,c;
    printf("Enter the range of the series :\n");
    scanf("%d",&var);
    fibonacciIter(var);
       
    return 0;
}