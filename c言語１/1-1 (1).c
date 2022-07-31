#include <stdio.h>

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

int main(void)
{
	int data[]={41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int ans;
	
	ans=mymax(data);
	
	printf("%d\n",ans);
	
	
	return 0;
}