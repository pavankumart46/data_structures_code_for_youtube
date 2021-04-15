#include<stdio.h>
int binarySearch(int a[],int element,int size);

int main(){
	int a[10] = {12,13,14,15,16,17,18,19,20,21};
	int element = 11;
	int index = binarySearch(a,element,10);
	if(index == -1){
		printf("Value is not found: Unsuccessful Search");
	}else{
		printf("Value is found at %d index",index);
	}
}

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
