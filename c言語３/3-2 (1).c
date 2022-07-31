#include <stdio.h>

int main(void)
{
	int i,a,b,r;
	printf("a:");
	scanf("%d",&a);
	printf("b;");
	scanf("%d",&b);
	
	r=a%b;
	if(a<b){
		printf("ERROR\n");
	}else{
		while(r!=0){
			a=b;
			b=r;
			r=a%b;
		}
		printf("%d\n",b);
	}
	
	
	
	return 0;
}