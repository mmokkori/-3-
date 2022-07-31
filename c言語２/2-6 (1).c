#include <stdio.h>
#include <stdlib.h>
double pow(double data[],int i){
	double nijou;
	nijou=data[i]*data[i];
	return nijou;
}
double myvar(double data[],int c){
	double average,average_2,bun,sum_2;
	int i;
	average = 0;
	average_2 = 0;
	
	for(i=0;i<=c;i++){
		average = average+data[i];
		sum_2 = pow(data,i);
		average_2 = average_2+sum_2;
		
	}
	
	average = average/c;
	average = average*average;
	average_2 = average_2 / c;
	
	bun = average_2-average;
	
	return bun;
}

int main(void)
{
	FILE *fp;
	fp=fopen("data.txt","r");
	
	int c,i;
	double *data,bun;
	
	if( fp == NULL ){ 
		fprintf(stderr, "Cannot open file\n");
		return -1;
	}
	
	
	fscanf(fp,"%d",&c);
	data = (double *)malloc(sizeof(double)*c);
	for(i=0;i<20;i++){
		fscanf(fp,"%lf",&data[i]);
	}

	fclose(fp); 
	
	bun = myvar(data,c);
	printf("%f\n",bun);
	free(data);

	return 0;
}