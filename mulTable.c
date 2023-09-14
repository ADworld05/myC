//print multipication table of a number 

#include <stdio.h>
 int main(){
    int num,i=1;
    printf("Enter a number to print multiplication table\n");
    scanf("%d",&num);
    
    while (i<=10)
    {
        printf("%d * %d = %d \n",num,i,(num*i));
        i+=1;
    }
    return 0;
 }