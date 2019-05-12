#include<stdio.h>
int main()
{
	//n是成对的不相容物品对数， m是集装箱货品清单的单数 
	int n,m;
	scanf("%d %d", &n, &m);
	
	/*n行，每一行是不相容的物品，
	如 20001 20002
       20003 20004
       代表两种货物的编号 （5位数） 
    */ 
    
    int unsafe[n][2];
    int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &unsafe[i][0], &unsafe[i][1]);
	} 
    
	/*m行 每一行一箱货物的清单 
	如 4 00001 20004 00002 20003
	4代表物品件数
	 后面是物品编号 
	*/
	int j=0;
	while(j<m)
	{
		int a;
		int flag=0;
		scanf("%d", &a);
		int M[a];
		for(int k=0;k<a;k++)
		{
			scanf("%d", &M[k]);
		}
		
		for(int k=0;k<a;k++)
		{
			for(int p=k+1;p<a;p++)
			{
				for(int q=0;q<n;q++)
				{
					if((M[k] == unsafe[q][0] && M[p] == unsafe[q][1]) || (M[k] == unsafe[q][1] && M[p] == unsafe[q][0]))
					{
						flag = 1;
					}
				}
			}
		}
		if(flag) printf("No");
		else printf("Yes");
		j++;
	}
	
	///////////对于m行清单，判断是否安全，安全输入Yes， 否则输出No ////////////// 
	
	
} 
