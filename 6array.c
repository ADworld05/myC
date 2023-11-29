//sort an array in ascending order

#include <stdio.h>

int main()
{
    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
    int temp;
    

    //take input of all the elements in array    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    }

    //iterate each element over another in array
    for (int j = 0; j < len; j++)
    {   
        for (int i = j+1; i < len; i++)
        {
            if (arr[j]>arr[i]) {        //swap places if condition is true
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

    }

    printf("The sorted array is :\n");
    for (int k = 0; k < len; k++)
    {
        printf("%d\n",arr[k]);
    }
    return 0;
}
