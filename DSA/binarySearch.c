#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    

    while (low <= high)
    {   int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }

        if (element < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 6, c;
    c = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, c);
    printf("%d", c);
}