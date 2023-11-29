// to copy the elements of aar1 to aar2 and print aar2 in reverse order
#include <stdio.h>

int main()
{

    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr1[len];
    int n;

    //take input of all the elements in array
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr1[i] = n;
    }

    int arr2[len];

    for (int i = 0, j = 0; j < len; i++, j++)
    {
        arr2[i] = arr1[j];
    }

// print array 2 in reverse order
    for (int k = len-1 ; k >= 0; k--)
    {
        printf("arr2[%d] = %d \n", k, arr2[k]);
    }
}