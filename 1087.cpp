#include<stdio.h>
#define INIT_NUM -1
int main()
{
	int n;
	scanf("%d", &n);
	int sum[n];
	for(int i=1;i<=n;i++)
	{
		sum[i-1] = i/2 + i/3 + i/5;
	}
	//删除sum中的重复元素
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		if(sum[j] == sum[i])
	 		{
	 			sum[i] = INIT_NUM;
	 			break;
			 }
		 }
	  } 
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(sum[i] != INIT_NUM)
		{
			count++;
		}
	}
	printf("%d", count);
 } 
