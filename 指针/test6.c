#include<stdio.h>
#define N 6

doubled(int *p)
{
	int i;
	for(i=0; i<N; i++)
	{
		*(p+i) *= 2;   //指针指向的  值  发生变换 
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
	
	printf("原数组为：");	
	for(p=x; p<x+N; p++)
	{
		printf("%d ", *p);
	}
	
	doubled(q);
	
	printf("\n二倍数组为：");	
	for(p=x; p<x+N; p++)
	{
		printf("%d ", *p);
	}
	
}
