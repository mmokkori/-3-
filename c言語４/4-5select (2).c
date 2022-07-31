#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int tim;
	int data[19000];
	int i,j,x,min,k;
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
		
		end = clock();
		elapsed = end - start;
		printf("%d",elapsed);
		printf("\n");
		
	}
	return 0;
}