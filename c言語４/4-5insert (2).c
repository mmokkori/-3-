#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int tim,tmp;
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
		for(i=1;i<size;i++){
		tmp = data[i];
		for(j=i-1;j>=0;j--){
			if(data[j]>tmp){
				data[j+1]=data[j];
			}else{
				break;
			}
		}
		data[j+1]=tmp;
	}
		
		end = clock();
		elapsed = end - start;
		printf("%d",elapsed);
		printf("\n");
		
	}
	return 0;
}