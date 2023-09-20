// to find factorial of a number using recursion

#include <stdio.h>

int factorialRecur(int a){

    if (a == 0 || a == 1)
    {
        return 1;
    }

    else 
    {
        return (a) * factorialRecur(a-1);
    }
}


int main(){

    int num;
    printf("Enter a number to find factorial :\n");
    scanf("%d",&num);

    printf("the factorial of the %d is %d",num,factorialRecur(num));

    return 0;

}