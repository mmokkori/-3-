/* 3-4.c */
#include <stdio.h>
/* �֐��̃v���g�^�C�v�錾�i�����͕ύX���Ȃ����Ɓj */
int Lsearch( int data[], int size, int n );
void output( int n, int ans );

int main(void){
	int data[] = { 4, 2, 8, 9, 5, 3, 6, 1, 7 };
	int size = sizeof(data) / sizeof(int);
	int n;
	int ans;
	printf("Search Number?:");
	scanf("%d", &n);
	/* ���`�T�����s��Lsearch�֐����Ăяo�� */
	ans = Lsearch( data, size, n );
	output( n, ans );
	return 0;
}
/* ���̊֐������������Ă������� */
/* ��1�����F�T������f�[�^�C��2�����F�f�[�^�̐��C��3�����F�T���Ώۂ̐��� */
int Lsearch( int data[], int size, int n ){
	int i;
	i = -1;
	for(i=0;i<size;i++){
		if(data[i] == n){
			break;
		}
	}
	
	return i;
}
/* �z�z������13�y�[�W�Ő錾����Ă���output�֐����R�s�[���Ă������� */
void output( int n, int ans ){
	if( ans == -1 ){ /* ������Ȃ�������-1 */
		printf("%d is not found.\n", n);
	}
	else{ /* ����������z��̔ԍ� */
		printf("%d is found in data[%d].\n", n, ans);
	}
}