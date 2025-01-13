#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 1st number :\n");
    scanf("%d",&a);
    printf("Enter 2nd number :\n");
    scanf("%d",&b);

    printf("a :%d\t",a);
    printf("b :%d\n",b);

    a=a+b;
    b=a-b;  // (a+b)-b = a
    a=a-b;  // (a+b)-a = b

    printf("a :%d\t",a);
    printf("b :%d\n",b);
    
    return 0;  

}