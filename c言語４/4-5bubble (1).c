#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int tim;
	int data[19000];
	int i,j,x;
	int size = sizeof(data) / sizeof(int);
	long start;
	long end;
	long elapsed;
	for(tim = 0;tim <10;tim++){
		
		srand((unsigned int)time(NULL)); 
		
		for(i=0;i<size;i++){
			data[i] = rand()%100+1;
			
		}
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
		printf("%d",elapsed);
		printf("\n");
		
	}
	return 0;
}