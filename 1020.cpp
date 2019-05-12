#include<stdio.h>
#include<stdlib.h>

struct yb{
	float kucun;
	float shoujia;
	float danjia;
};

int cmp(const void *a, const void *b)
{
	return ((*(struct yb *)a).danjia < (*(struct yb *)b).danjia ? 1:0);
}

int main()
{
	int N;
	float D, shouyi=0;
	scanf("%d %f", &N, &D);
	struct yb yuebing[N];
	for(int i=0;i<N;i++)
	{
		scanf("%f", &yuebing[i].kucun);
	}
	for(int i=0;i<N;i++)
	{
		scanf("%f", &yuebing[i].shoujia);
	}
	for(int i=0;i<N;i++)
	{
		yuebing[i].danjia = yuebing[i].shoujia/yuebing[i].kucun;
	}
	
	qsort(yuebing, N, sizeof(yuebing[0]), cmp);
	for(int i=0;i<N;i++)
	{
		printf("%f ", yuebing[i].danjia);
	}
	
	for(int i=0;i<N;i++)
	{
		if(D <= yuebing[i].kucun)
		{
			shouyi += yuebing[i].danjia * D;
			break;
		}
		else{
			shouyi += yuebing[i].shoujia;
			D -= yuebing[i].kucun;
		}
	}
	printf("%.2f", shouyi);
} 
