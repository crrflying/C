#include<stdio.h>
#define N 7

int main()
{
	int x[N];
	int i, p;
	for(i=0;i<N;i++)
	{
		scanf("%d", x+i);
	}
	int j, k;
	int temp;
	for(j=0,k=N-1;j<N/2;j++,k--)
	{
		temp = x[j];
		x[j] = x[k];
		x[k] = temp;
	}
	for(p=0;p<N;p++)
	{
		printf("x[%d] = %d\n", p, *(x+p));
	}
	
}
