#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp=fopen("ascii_art.txt","r");
	
	int c;
	int i;
	
	if( fp == NULL ){ 
		fprintf(stderr, "Cannot open file\n");
		return -1;
	}
	i=0;
	while( (c = fgetc(fp)) != EOF){
		i=i+1;
		putchar(c);
		if(i%64==0){
			printf("\n");
		}
	}
	fclose(fp); 
	return 0;
	
}
