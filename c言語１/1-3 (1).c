#include <stdio.h>
int mymin(int data[]){
	int mininum;
	int i;
	
	mininum=data[0];
	for(i=1;i<10;i++){
		if(data[i]<mininum){
			mininum=data[i];
		}
	}
	
	return mininum;
}

int mymax(int data[10]){
	int max;
	int i;
	
	
	max=data[1];
	for(i=0;i<10;i++){
		if(data[i]>max){
			max=data[i];
		}
	}
	
	return max;
}

int mysum(int data[10]){
	int i,sum;
	
	sum=data[0];
	
	for(i=1;i<10;i++){
		sum=sum+data[i];
	}
	
	return sum;
}

int main(void){
	int data[]={41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int min,max,sum;
	
	min=mymin(data);
	sum=mysum(data);
	max=mymax(data);
	
	printf("The minimum number is %d\n The  sum is %d\n The max number is %d\n",min,sum,max);
	
	return 0;
}