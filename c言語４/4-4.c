#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int data[20];
	int i,tmp,j;
	int size = sizeof(data) / sizeof(int);
	
	for(i=0;i<=19;i++){
		data[i] = rand()%100+1;
		printf("%d,",data[i]);
	}
	printf("\n");
	
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
	for(i=0;i<=19;i++){
		printf("%d,",data[i]);
	}
	printf("\n");
	
	return 0;
	
}