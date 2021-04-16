#include<stdio.h>
int interpolationSearch(int a[],int element,int size);

int main()
{
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	int element = 190;
	int index = interpolationSearch(a,element,10);
	if(index == -1){
		printf("NOT FOUND");
	}else{
		printf("%d",index);
	}
}

//position = low + ((element-a[low])/(a[high]-a[low]))*(high-low);
int interpolationSearch(int a[],int element,int size){
	int low,high,pos;
	low = 0;
	high = size-1;
	
	while(low<=high){
		pos = low + ((element-a[low])/(a[high]-a[low])) * (high-low);
		if(a[pos] == element)
			return pos;
		else if(a[pos] > element)
		    high = pos-1;
		else
		    low = pos+1;
	}
	
	return -1;
}
