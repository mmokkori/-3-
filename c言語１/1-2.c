#include <stdio.h>

int mysum(int data[10]){
	int i,sum;
	
	sum=data[0];
	
	for(i=1;i<10;i++){
		sum=sum+data[i];
	}
	
	return sum;
}

int main(void)
{
	int data[]={41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int sum;
	
	sum=mysum(data);
	printf("%d\n",sum);
	
	return 0;
}