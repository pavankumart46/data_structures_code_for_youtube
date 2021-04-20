#include<stdio.h>
#include<math.h>
int jumpSearch(int a[],int element,int size);
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int element = 99;
	int index = jumpSearch(a,element,10);
	if(index == -1)
		printf("NOT FOUND");
	else
		printf("%d",index);
}

int jumpSearch(int a[],int element,int size){
	int low = 0;
	int jump = sqrt(size); // Square root of the size of the array
	for(int i = 0; i<size; i+=jump){
		if(a[i] == element)
			return i;
		if(a[i] < element)
			low = i;
		else
			break;
	}
	
	for(int i = low; i<size; i++){
		if(a[i] == element)
			return i;
	}
	
	return -1;
}
