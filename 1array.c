//to take input the elements of an array
#include <stdio.h>

int main()
{
    int len;
    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter %d element of the array :",i);
        scanf("%d",&n);
        arr[i]=n;
    }

    for (int i = 0; i < len; i++)
    {
        printf("array[%d]= %d \n",i,arr[i]);        
    }
       
}