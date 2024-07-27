//2)	WAP to find out the second highest and second lowest in an array.


#include <limits.h>
#include <stdio.h>

void second_largest(int arr[], int size)
{
    int i, first, second;

    if (size < 2) {
        printf(" Invalid Input ");
        return;
    }

    first = second = INT_MIN;
    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d\n", second);
}
void second_lowest(int arr[], int size)
{
    int i, first, second;

    if (size < 2) {
        printf(" Invalid Input ");
        return;
    }

    first = second = INT_MAX;
    for (i = 0; i < size; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The second smallest element is %d\n", second);
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
    second_largest(arr, size);
    second_lowest(arr, size);
}
