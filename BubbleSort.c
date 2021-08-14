// Bubble Sort
#include<stdio.h>
int bubbleSort(int a[],int size);
int main(){
	int a[] = {10,9,8,7,1,2,3,4};
	int size = 8;
	bubbleSort(a,size);
	return 0;
}

int bubbleSort(int a[],int size){
	int iterations = 0;
	int swap = 1;
	for(int i=0; i<size && swap; i++){
		swap = 0;
		for(int j = 0; j<size-1; j++){
			iterations ++;
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				swap = 1;
			}
		}
	}
	
	for(int i=0; i<size; i++){
		printf("%d ",a[i]);
	}
	
	printf("Iterations %d",iterations);
	return 78;
}
