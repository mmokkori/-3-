#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	if(x%4==0){
		if(x%100==0){
			if(x%400==0){
				printf("%d->���邤�N�ł��B",x);
			}else{
				printf("%d->���邤�N�ł͂���܂���B",x);
			}
			
		}else{
			printf("%d->���邤�N�ł��B",x);
		}
			
	}else{
		printf("%d->���邤�N�ł͂���܂���B",x);
	}
	
	
	return 0;
}