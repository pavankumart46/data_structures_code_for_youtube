/** TODO 1: To Search for an element in an Array
 * Using Unordered Linear Search.*/

#include<stdio.h>
int unorderedLinearSearch(int a[],int element,int size);
int orderedLinearSearch(int a[],int element,int size);

int main(){
	int a[10] = {12,14,16,3,2,5,10,-3,-45,-65};
	int key = 5;
	int index = unorderedLinearSearch(a,key,10);
	if(index != -1){
		printf("Element is found at %d index",(index+1));
	}else{
		printf("Element is not Found");
	}
	
	int b[5] = {2,5,6,8,10};
	int element = 5;
	int i = orderedLinearSearch(b,element,5);
	if(i == -1){
		printf("\nElement is not Found");
	}else{
		printf("\nThe element is found at %d",i);
	}
}

int orderedLinearSearch(int a[],int element,int size){
    for(int i=0; i<size; i++){
		if(a[i] == element){
			return i;
		}else if(a[i] > element){
			return -1;
		}
	}
	return -1;
}
int unorderedLinearSearch(int a[],int element,int size){
	for(int i = 0; i < size; i++){
		if(a[i] == element){
			return i;
		}
	}
	return -1;
}
