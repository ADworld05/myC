// to find frequency of elements in the array
#include <stdio.h>
int main(){

   int len;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &len);
    int arr[len];
    int n;
        
    //take input of all the elements in array    
    for (int i = 0; i < len; i++)
    {
        printf("element %d :",i);
        scanf("%d", &n);
        arr[i] = n;
    } 
    
    int arrFreq[len];

    for (int i = 0; i < len; i++)
    {
        int count=1;
        for (int j = i+1; j  < len ; j ++)
        {
            if (arr[i]==arr[j]){
                count++;            
            }
        }

        arrFreq[i]=count;
    }   
        printf("the frequency of elements are :\n");
        for (int i = 0; i < len; i++)
        {
            printf("%d := %d\n",arr[i],arrFreq[i]);
        }       
        
}