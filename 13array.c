//to delete an element in array by value

#include <stdio.h>
 int main(){
    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
    int value,index;
        
    //take input of all the elements in array    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    }

    printf("Enter the element to delete :\n");
    scanf("%d",&value);

    index=arr[value];

    for (int i = value; i < len; i++)
    {
        arr[value]=arr[value+1];
    }

    for (int i = 0; i < len-1; i++)
    {
        printf("array[%d]= %d \n",i,arr[i]);        
    }
    
 
}