#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d", &m, &n);
	int stu[m][n];
	int grade[n];
	int ans[n];
	int i,j, k, p;
	for(i=0;i<n;i++)
	{
		scanf("%d", &grade[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d", &ans[j]);
	}
	for(k=0;k<m;k++)
	{
		for(p=0;p<n;p++)
		{
			scanf("%d",&stu[k][p]);
		}
	}
	//¼ÆËã·ÖÊı
    int stu_gra[m] = {0};
	int x,y,z;
	for(x=0;x<m;x++)
	{
		for(y=0;y<n;y++)
		{
			if(stu[x][y] == ans[y])
			{
				stu_gra[x] += grade[y];
			}
		}
		printf("%d\n", stu_gra[x]);
	} 
	
} 
