//separate out odd and even integer in an array
#include <stdio.h>

int main()
{
    int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
    
    int arrOdd[len];
    int arrEven[len];

    int countOdd=0,countEven=0;
    
    //take input of all the elements in array    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2==0){
            arrEven[countEven]=arr[i];
            countEven++;
        }

        else {
            arrOdd[countOdd]=arr[i];
            countOdd++;
        }
    }
    printf("The even array:\n");
    for (int k = 0; k < countEven; k++)
    {
        printf("%d\t",arrEven[k]);
    }

    printf("\n");

    printf("The odd array:\n");
    for (int k = 0; k < countOdd; k++)
    {
        printf("%d\t",arrOdd[k]);
    }


}