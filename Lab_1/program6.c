// insertion sort

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
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

	insertionSort(arr, size);
	printArray(arr, size);
}
