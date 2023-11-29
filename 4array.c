#include <stdio.h>
int main()
{
    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
    int count;
    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    }

    for (int j = 0; j < len; j++)
    {   
        count=0;
        for (int i = j+1; i < len; i++)
        {
            if (arr[j]== arr[i])
            count+=1;
            break;
        }
    }

 printf("Total number of duplicate elements found in the array: %d\n", count);
 return 0;
}