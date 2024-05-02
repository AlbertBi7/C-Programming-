#include <stdio.h>
int sumArray(int *arr, int size) {
    int sum = 0;
   for(int i=0;i<size;i++)
   {
        sum += *(arr+i);
   }
    return sum;
}

int main() {
    int limit; 
    printf("Enter the number of elements of the array: ");
    scanf("%d", &limit);
    
    int arr[limit];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < limit; i++) {
        scanf("%d", &arr[i]); 
    }
    
    int arraySum = sumArray(arr, limit);
    printf("Sum of the array elements: %d\n", arraySum);
    
    return 0;
}