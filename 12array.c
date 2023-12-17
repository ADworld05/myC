//find 2nd max and 2nd min element in an array
//sort and find a[1] , a[2]
#include <stdio.h>
int main(){

    int len;
    int i;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n,temp;
    
    // take input of all the elements in array
    for (i = 0; i < len; i++)
    {
        printf("element %d :", i);
        scanf("%d", &n);
        arr[i] = n;
    }

    for (i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }     
    }
    
    printf("the 2nd max element :%d",arr[1]);
    printf("the 2nd min element :%d",arr[len-2]);
}