// to print the sum of series 1 + 1/x + 1/x^2 + 1/x^3..... using loop
// to be checked later
#include <stdio.h>
#include <math.h>
int main(){
    int num,x, i;
    float sum = 0;
    printf("Enter the number of terms :\n");
    scanf("%d", &num);
    printf("Enter value of x :\n");
    scanf("%d", &x);


    for (int i = 1; i <= num; i++)
    {
        if (num == 1)
        {
            printf("the sum upto %d terms is %d", num, 1);
        }
        else 
        {
            sum += 1 / pow(((float)x),i);   // 1+1/x^i
        }
    }
    printf("the sum upto %d terms is %f", num, sum);
    return 0;
}