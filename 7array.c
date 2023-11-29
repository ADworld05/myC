// merge 2 array and sort resultant in descending

#include <stdio.h>

int main()
{
    int len1,len2;
    int n;
    int temp;

    printf("Enter the number of elements in the array 1 :\n");
    scanf("%d", &len1);
    int arr1[len1];
    //take input of all the elements in array1    
    for (int i = 0; i < len1; i++)
    {
        printf("array1 element %d :",i);
        scanf("%d", &n);
        arr1[i] = n;
    }

    printf("Enter the number of elements array 2 :\n");
    scanf("%d", &len2);
    int arr2[len2];
    //take input of all the elements in array2 
    for (int i = 0; i < len2; i++)
    {
        printf(" array2 element %d :",i);
        scanf("%d", &n);
        arr2[i] = n;
    }


    int len3=len1+len2;
    int arr3[len3];

    // merge the elements of the arr1 and arr2 in arr3
    for (int i = 0; i < len1; i++)
    {
        arr3[i]=arr1[i];
    }
   
    for (int i = 0; i < len2; i++)
    {
        arr3[i+len1]=arr2[i];
    }
    
    //iterate each element over another in array3
    for (int j = 0; j < len3; j++)
    {   
        for (int i = j+1; i < len3; i++)
        {
            if (arr3[j]<arr3[i]) {        //swap places if condition is true
                temp=arr3[j];
                arr3[j]=arr3[i];
                arr3[i]=temp;
            }
        }
    }

    printf("The sorted array is :\n");
    for (int k = 0; k < len3; k++)
    {
        printf("%d\n",arr3[k]);
    }
   
}