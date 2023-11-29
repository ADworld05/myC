// to count the number of same elements in a array

#include <stdio.h>

int main()
{
    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
    int count=1;

    //take input of all the elements in array    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    }

    for (int j = 0; j < len; j++)
    {
        for (int i = j+1; i < len; i++)
        {
            if (arr[j]== arr[i])
            count+=1;
        }
        }

    if(count>1)   
        printf("no of element repeated is %d",count);
    else
        printf("no element repeated");
}