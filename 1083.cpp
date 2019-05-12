#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int fan[n], cha[n], count[n]={0};
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &fan[i-1]);
		
	}
	for(int i=0;i<n;i++)
	{
		if(i+1 >= fan[i])
		{
			cha[i] = i+1 - fan[i];
		}
		else{
			cha[i] = fan[i] - (i+1);
		}
	}
	/*
	int temp, max;
	for(int i=0;i<n;i++)
	{
		max=i;
		for(int j=i+1;j<n;j++)
		{
			if(cha[j] > cha[max])
			{
				max = j;
			}
		}
		temp = cha[i];
		cha[i] = cha[max];
		cha[max] = temp;
	}
	*/
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(cha[j] == i)
			{
				count[i]++;
			}
		}
		
	}
	for(int i=n-1;i>=0;i--)
	{
		
		if(count[i] > 1)
		{
			printf("%d %d\n", i, count[i]);
		}
		
	}
}
