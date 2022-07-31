#include <stdio.h>
#include <stdlib.h>
int fortune(seed){
	int lucky_num;
	
	/*unsigned int seed;*/
	srand(seed);
	lucky_num = rand()%100+1;
	
	
	if(lucky_num<=10){
		lucky_num = 0;
	}else if(lucky_num<=30){
		lucky_num = 1;
	}else if(lucky_num<=65){
		lucky_num = 2;
	}else if(lucky_num<=90){
		lucky_num = 3;
	}else if(lucky_num<=100){
		lucky_num = 4;
	}

	return lucky_num;
	
}
int main(void)
{
	int ln;
	unsigned int seed;
	printf("Seed? == ");
	scanf("%d",&seed);
	
	
	ln = fortune(seed);
	
	
	if(ln==0){
		printf("Worst luck");
	}if(ln==1){
		printf("Bad luck");
	}if(ln==2){
		printf("Good luck");
	}if(ln==3){
		printf("Better luck");
	}if(ln==4){
		printf("Excellent luck");
	}
	
	return 0;
	
}