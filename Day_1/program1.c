/*1)	WAP to find out sum and average of n array elements. 
Find the smallest and largest element in the array and also 
find reverse of that array. */

#include <stdio.h>
int smallest(int arr[], int size){
	int small=arr[0];
	for(int i=1;i < size; i++){
		if(small>arr[i])
			small=arr[i];
	}
	return small;
}

int largest(int arr[], int size){
	int large=arr[0];
	for(int i=1;i < size; i++){
		if(large<arr[i])
			large=arr[i];
	}
	return large;
}
void reverse(int arr[], int size){
	int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversedArr[i]);
    }
}
void main(){
	int size, arr[100],sum=0, avg=0, small=0, large=0;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/size;
	printf("Sum of all elements=%d\n",sum);
	printf("Average=%d\n",avg);
	small=smallest(arr, size);
	large=largest(arr, size);
	printf("smallest element is %d\n", small);
	printf("largest element is %d\n", large);
	reverse(arr,size);
}
