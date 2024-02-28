#include <iostream.h>

int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

       
        if (arr[mid] == key)
            return mid;

       
        if (arr[mid] > key)
            return binarySearchRecursive(arr, low, mid - 1, key);

        
        return binarySearchRecursive(arr, mid + 1, high, key);
    }

    
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the element to find");
    int key ;
    scanf("%d",&key);

    int result = binarySearchRecursive(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element %d is present at index %d.\n", key, result);
    else
        printf("Element %d is not present in the array.\n", key);

    return 0;
}
