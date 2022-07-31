#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int data[20];
	int i,j,x;
	int size = sizeof(data) / sizeof(int);
	
	for(i=0;i<=19;i++){
		data[i] = rand()%100+1;
		printf("%d,",data[i]);
	}
	printf("\n");
	
	
	
	for(i=0;i<size-1;i++){
		j = size - 1;
		while(j>i){
			if(data[j] < data[j-1]){
				x = data[j];
				data[j] = data[j-1];
				data[j-1] = x;
			}
			j--;
		}
	}
	for(i=0;i<=19;i++){
		printf("%d,",data[i]);
	}
	printf("\n");
	
	
	
	return 0;
}