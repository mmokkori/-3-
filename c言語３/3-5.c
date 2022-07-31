/* 3-5.c */
#include <stdio.h>
/* �֐��̃v���g�^�C�v�錾�i�����͕ύX���Ȃ����Ɓj */
int Bsearch( int data[], int size, int n );
void output( int n, int ans );

int main(void){
	int data[] = { 4, 6, 9, 10, 11, 14, 17, 19, 21, 26 };
	int size = sizeof(data) / sizeof(int);
	int n;
	int ans;
	printf("Search Number?:");
	scanf("%d", &n);
	/* �񕪒T�����s��Bsearch�֐����Ăяo�� */
	ans = Bsearch( data, size, n );
	output( n, ans );
	return 0;
}
/* ���̊֐������������Ă������� */
/* ��1�����F�T������f�[�^�C��2�����F�f�[�^�̐��C��3�����F�T���Ώۂ̐��� */
int Bsearch( int data[], int size, int n ){
	int i,p,st,left,right;
	
	left=0;
	right=size;
	
	
	while(left<=right){
		p=(right+left)/2;
		
		if(data[p]==n){
			break;
		}else if(data[p]<n){
			left=p+1;
		}else if(data[p]>n){
			right=p-1;
		}
		p=-1;
	}
	
	return p;
}
/* �z�z������13�y�[�W�Ő錾����Ă���output�֐����ė��p���Ă������� */
void output( int n, int ans ){
	if( ans == -1 ){ /* ������Ȃ�������-1 */
		printf("%d is not found.\n", n);
	}
	else{ /* ����������z��̔ԍ� */
		printf("%d is found in data[%d].\n", n, ans);
	}
}