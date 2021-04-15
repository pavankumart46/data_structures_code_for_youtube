#include<stdio.h>
int binarySearch(int a[],int element,int size);
int BinarySearchRecursion(int a[],int element,int low,int high);

int main(){
	int a[10] = {12,13,14,15,16,17,18,19,20,21};
	int element = 13;
	int index = binarySearch(a,element,10);
	if(index == -1){
		printf("Value is not found: Unsuccessful Search");
	}else{
		printf("Value is found at %d index",index);
	}
	int i = BinarySearchRecursion(a,element,0,9);
	if(i == -1){
		printf("\nValue is not found: Unsuccessful Search");
	}else{
		printf("\nValue is found at %d index",i);
	}
}

//Binary Search Using Iteration
int binarySearch(int a[],int element,int size){
	int low,high,mid;
	low = 0;
	high = size-1;
	while(low<=high){
		mid = (low+high)/2;
		if(a[mid] == element){
			return mid;
		}else if(a[mid] > element){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return -1;
}

// Binary Search Using Recursion
int BinarySearchRecursion(int a[],int element,int low,int high){
	if(low>high)
	{
		return -1;
	}
	int mid = (low+high)/2;
	if(a[mid]==element){
		return mid;
	}else if(a[mid]<element){
		return BinarySearchRecursion(a,element,mid+1,high);
	}else{
		return BinarySearchRecursion(a,element,low,mid-1);
	}
	
	return -1;
}
