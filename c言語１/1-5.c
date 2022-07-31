#include <stdio.h>

double mymean(double data[10]){
	int i;
	double avg;
	
	avg=0.0;
	for(i=0;i<=9;i++){
		avg=avg+data[i];
	}
	
	avg=avg/10.0;
	
	return avg;
}
int main(void)
{
	double data[]= {38.1, 14.2, 51.3, 5.4, 12.5, 39.6, 27.7, 19.8, 81.9, 62.1};
	double avg;
	
	avg=mymean(data);
	printf("%lf\n",avg);
	
	return 0;
}