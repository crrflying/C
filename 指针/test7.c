//ָ����ʶ�ά���� 
#include<stdio.h>

int main()
{
	
	int num[2][3] = {1,2,3,4,5,6};
	/*
	int *p = *num;  //ָ���� , ������ʽ num[0], &num[0][0], *(num+0)
	int i; 
	for(i=0;i<6;i++)
	{
		if((p - *num) % 3 == 0)
		{
			printf("\n");
		}
		printf("%-5d", *(p++));  //������� 
	}
	*/ 
	int (*p)[3];   //ָ�����������ָ��
	p = num;  //ָ��������
	int i, j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%-5d", *(*(p+i)+j));  //���num[i][j] 
		}
		printf("\n");
	 } 
}


