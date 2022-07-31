#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int data[20];
	int i,j,min,k,x;
	int size = sizeof(data) / sizeof(int);
	
	for(i=0;i<=19;i++){
		data[i] = rand()%100+1;
		printf("%d,",data[i]);
	}
	printf("\n");
	
	for(i=0;i<size-1;i++){
		min = data[i];
		k = i;
		j = i+1;
		while(j < size){
			if(min > data[j]){
				min = data[j];
				k = j;
			}
			j++;
		}
		x = data[i];
		data[i] = data[k];
		data[k] = x;
	}
	
	for(i=0;i<=19;i++){
		printf("%d,",data[i]);
	}
	printf("\n");	
	
	return 0;
}