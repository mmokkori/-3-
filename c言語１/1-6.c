#include <stdio.h>
#include <math.h>
/*ルートの中身をbox_avgとする*/
void hensachi(double data[10]){
	int i;
	double avg,x,box_avg,hyou_hen;
	double box[10];
	
	/*平均*/
	avg=data[0];
	for(i=1;i<=9;i++){
		avg=avg+data[i];
	}
	avg=avg/10;
	
	/*標準偏差(ルートの中身)*/
	for(i=0;i<=9;i++){
		x=data[i]-avg;
		box[i]=x*x;
	}
	box_avg=box[0];
	for(i=1;i<=9;i++){
		box_avg=box_avg+box[i];
	}
	box_avg=box_avg/10;
	
	/*標準偏差*/
	hyou_hen=sqrt(box_avg);
	
	/*偏差値*/
	for(i=0;i<=9;i++){
		printf("%lf\n\n",(data[i]-avg)/hyou_hen*10+50);
	}
}
int main(void)
{
	double data[]={59,72,98,77,85,86,34,84,61,45};
	
	hensachi(data);
	return 0;
}