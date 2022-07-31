#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	if(x%4==0){
		if(x%100==0){
			if(x%400==0){
				printf("%d->うるう年です。",x);
			}else{
				printf("%d->うるう年ではありません。",x);
			}
			
		}else{
			printf("%d->うるう年です。",x);
		}
			
	}else{
		printf("%d->うるう年ではありません。",x);
	}
	
	
	return 0;
}