#include <stdio.h>

int b = 3477; // This is a global variable since it is declared inside main()


int func1(int b1)
{
    //static int myvar = ret();
    //printf("The value of myvar is %d\n", myvar);
    //myvar++;
    printf("the value of formal argument in func1%d\n",b1);
    printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    //return b1 + myvar;
    return b1;

}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    //val = func1(b);
    //val = func1(b);
    //val = func1(b);
    //val = func1(b);
    //int *ptr = &val;
    printf("The value of func1 is %d", val);
    // printf("%d", loc);
    return 0;
}
