//�������

#include<stdio.h>
#define N 6

void xb()  //�±� 
{
    int x[N];
	int i;
	for(i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}
	for(i = 0; i < N; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
}

void sdz()  //�׵�ַ 
{
	int x[N];
	int i;
	for(i = 0; i < N; i++)
	{
		scanf("%d", x+i);
	}
	for(i = 0; i < N; i++)
	{
		printf("x[%d] = %d\n", i, *(x+i));
	}
} 

void zz() //ָ�� 
{
	int x[N];
	int *i, j=0;
	for(i = x; i < x+N; i++)
	{
		scanf("%d", i);
	}
	for(i = x; i < x+N; i++,j++)
	{
		printf("x[%d] = %d\n", j, *i);
	}
}

int main(void)
{
	//xb();
	//sdz();
	zz();
} 
