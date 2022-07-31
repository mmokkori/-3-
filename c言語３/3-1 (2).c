#include <stdio.h>
struct gakusei{
	int gakuban;
	int math;
	int eng;
	int phy;
	float heikin;
	
};
int main(void)
{
	struct gakusei ns_2nen[3];
	
	int i;
	double abg;
	
	for(i=0;i<=2;i++){
		printf("Šw¶”Ô†:\n");
		scanf("%d",&ns_2nen[i].gakuban);
		printf("”Šw:\n");
		scanf("%d",&ns_2nen[i].math);
		printf("‰pŒê:\n");
		scanf("%d",&ns_2nen[i].eng);
		printf("•¨—:\n");
		scanf("%d",&ns_2nen[i].phy);
		ns_2nen[i].heikin=((float)ns_2nen[i].math+(float)ns_2nen[i].eng+(float)ns_2nen[i].phy)/3;
	}
	for(i=0;i<=2;i++){
		printf("Šw¶”Ô†:%d \t •½‹Ï:%4.1f\n",ns_2nen[i].gakuban,ns_2nen[i].heikin);
	}
	return 0;
	
}