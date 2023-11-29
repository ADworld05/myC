//to insert element in desired position in an array
#include <stdio.h>

int main(){

    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[20];
    int n,newElem,newPos;
        
    //take input of all the elements in array    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    } 

    printf("The array is :\n");
    for (int k = 0; k < len; k++)
    {
        printf("%d\t",arr[k]);
    }
   
    printf("\n");

    //ask for new element to be entered 
    printf("Enter the new element :\n");
    scanf("%d",&newElem);
    arr[len]=newElem;
    printf("Enter new index :\n");
    scanf("%d",&newPos);

    for (int i = len; i > newPos; i--)
    {
        arr[i] = arr[i-1];
    } 

    arr[newPos]=newElem;

    printf("The new array is :\n");
    for (int k = 0; k < len+1; k++)
    {
        printf("%d\t",arr[k]);
    }
    
}