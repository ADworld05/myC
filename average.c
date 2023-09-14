// to find average of given numbers

#include <stdio.h>
int main()
{
    int count, i, n, sum = 0;
    printf("Enter a number :");  //avg of how many numbers
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("enter numbers to find average :\n");
        scanf("%d", &n);
        sum = sum + n;
    }
    float average = (float)sum / count;
    printf("the average of the number are %f :\n", average);
    return 0;
}
