#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "Chiba Institute";
	char str2[] = "Technology";
	char str3[30];
	char str4[30];
	
	char *c = " of ";
	
	strcat(str1,c);
	strcpy(str3,str1);
	strcat(str3,str2);
	printf("%s\n",str3);
	
	sprintf(str4,"%s%s",str1,str2);
	printf("%s\n",str4);
	
	return 0;
	
	

}