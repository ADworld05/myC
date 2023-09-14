// c program to print first n odd terms and find their average

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 0; i < 2 * n; i++) // 2*n @ check in first 2n integers
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    float avg = (float)sum / n;
    printf("the average of first %d odd number is %f", n, avg);
}
