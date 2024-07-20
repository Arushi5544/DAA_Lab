/*3)	WAP to search for an element in an array(linear search).
WAP to perform binary search. */

#include<stdio.h>
int linear_search(int arr[], int size, int num){
	for(int i=0;i<size;i++){
		if(num==arr[i])
			return i;
	}
	return -1;
}
int binary_search(int arr[],int size,int low, int high, int num){
    while (low <= high) {
        int mid = low+(high-low)/2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void main(){
	int size, arr[100],num;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search:");
	scanf("%d",&num);
	int index1=linear_search(arr,size,num);
	int index2=binary_search(arr, size, 0, size-1,num);
	if(index1 && index2==-1)
		printf("element not found");
	else{
		printf("Linear search - element found at %d\n", index1);
		printf("Binary Search - element found at %d\n", index2);
	}
}