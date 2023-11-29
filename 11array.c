// to find max and min element in an array
#include <stdio.h>

int main()
{

    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
    int max, min;

    // take input of all the elements in array
    for (int i = 0; i < len; i++)
    {
        printf("element %d :", i);
        scanf("%d", &n);
        arr[i] = n;
    }

    //find the max element
    //declare 1st element as maximum element and then check
    max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (max < arr[i]){
            max = arr[i];
        }
    }

    //find the min element
    min = arr[0];
    for (int j = 0; j < len; j++)
    {
        if (min > arr[j]){
            min = arr[j];
        }
    }
    
    printf("\n");
    printf("The min element : %d\n", min);
    printf("The max element : %d", max);
    return 0;
}