#include<stdio.h>
#define N 6

doubled(int *p)
{
	int i;
	for(i=0; i<N; i++)
	{
		*(p+i) *= 2;   //ָ��ָ���  ֵ  �����任 
	}
	return 0;
}

int main()
{
	int x[N];
	int *p;
	int *q = x;
	for(p=x; p<x+N; p++)
	{
		scanf("%d", p);
	}
	
	printf("ԭ����Ϊ��");	
	for(p=x; p<x+N; p++)
	{
		printf("%d ", *p);
	}
	
	doubled(q);
	
	printf("\n��������Ϊ��");	
	for(p=x; p<x+N; p++)
	{
		printf("%d ", *p);
	}
	
}
