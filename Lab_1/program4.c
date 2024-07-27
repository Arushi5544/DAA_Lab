//Bubble sort

#include <stdbool.h>
#include <stdio.h>

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void bubbleSort(int arr[], int n)
{
     int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]) {  
        swap(&arr[j], &arr[j+1]);  
      }  
    }  
  }  
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void main()
{
    int size, arr[100];
    printf("Enter size of array\n");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
}
