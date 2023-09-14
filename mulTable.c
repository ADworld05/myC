//print multipication table of a number 

#include <stdio.h>
 int main(){
    int num,i=1,col;
    printf("Enter a number to print multiplication table\n");
    scanf("%d",&num);
    printf("Print table upto :\n");
    scanf("%d",&col);
    
    
    
    while (i<=col)
    {
        printf("%d * %d = %d \n",num,i,(num*i));
        i+=1;
    }
    return 0;
 }