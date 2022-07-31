#include <stdio.h>

int main(void)
{
	int data[2000];
	int i,j,min,k,x,y;
	int size ;
	for(y=0;y<10;y++){
		
		size = sizeof(data) / sizeof(int);
		for(i=0;i<2000;i++){
			data[i] = 2000-i;
		}
		unsigned long int start; 
		unsigned long int end;
		unsigned long int elapsed; 
		
		start = clock();
		
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
		
		end = clock();
		elapsed = end - start; 
		
		printf("START TIME: %lu\n", start);
		printf("END TIME: %lu\n", end);
		printf("ELAPSED TIME: %lu\n", elapsed);
		printf("\n");
	
	}
	
	return 0;
}