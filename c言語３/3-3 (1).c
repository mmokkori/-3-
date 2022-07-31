#include <stdio.h>
#include <stdlib.h>
struct PLAYER{
	int ENERGY;
	int POISON;
}p;
struct MONSTER{
	int ENERGY;
}m;
int main(void)
{
	
	int seed,command,x;
	printf("seed値を入力してください。");
	scanf("%d",&seed);
	srand(seed);
	/*プレイヤーの設定*/
	p.ENERGY=300;
	p.POISON=0;
	/*モンスターの設定*/
	m.ENERGY=(rand()%401)+100;
	
	printf("A monster appers!\n");
	
	while(1){
	
	printf("ENERGY:%d  POISON:%d\n",p.ENERGY,p.POISON);
	printf("Monster-ENERGY:%d\n\n" ,m.ENERGY);
	
	printf("Command? -> 1:Attack 2:Heal 3:Cure Poison\n\n");
	
	scanf("%d",&command);
	
	if(command==1){
		x=(rand()%41)+10;
		m.ENERGY=m.ENERGY-x;
		printf("You attacked! A monster received %d damage!\n\n",x);
	}else if(command==2){
		x=(rand()%41)+30;
		p.ENERGY=p.ENERGY+x;
		printf("You recovered %d energy!\n\n",x);
	}else if(command==3){
		p.POISON=0;
		printf("Your poison was cured!\n\n");
	}else{
		printf("MISS\n\n");
	}
	
	/*モンスターの生死判定*/
	if(m.ENERGY <=0){
		printf("Game crear!\n");
		break;
	}
	/*モンスターターン*/
	
	x=(rand()%41)+10;
	p.ENERGY=p.ENERGY-x;
	printf("A monster attacked! You received %d damage!\n\n",x);
	
	/*プレイヤーの生死判定*/
	if(p.ENERGY <=0){
		printf("Game over\n");
		break;
	}
	
	/*毒の処理*/
	
	if(p.POISON==0){
		if(rand()%100<=4){
			printf("You were affected by the poison!!\n\n");
			p.ENERGY=p.ENERGY-p.ENERGY*0.05;
		}
	}
	if(p.POISON==1){
		p.ENERGY=p.ENERGY-p.ENERGY*0.05;
		printf("Your energy was decreased 5 percent by the poison!\n\n");
	}
	/*プレイヤーの生死判定*/
	if(p.ENERGY <=0){
		printf("Game over\n");
		break;
	}
		
		
	}

	return 0;
}