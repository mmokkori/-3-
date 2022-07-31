#include <stdio.h>
#include <string.h>
int main(void)
{
	char typing[32];
	char data[3][32]={"apple","banana","orange"};
	char str;
	int i,result;
	
	i=0;
	
	while(i<=2){
		printf("%s\n\n",data[i]);
		scanf("%s",typing);
		
		result=strcmp(data[i],typing);
		if(result==0){
			printf("OK\n");
			i++;
		}
		else{
			printf("MISS\n");
		}
		
		
	}
	
	return 0;
}