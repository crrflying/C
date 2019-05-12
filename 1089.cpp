#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int wj[n];
	int w1,w2;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &wj[i]); //输入玩家说的话 
	}
	//假设有两个狼人i，j 
	for(int i=1;i<=n;i++)
	{
		
		for(int j=i+1;j<=n;j++)
		{ 
		    int pl=0, wl=0;
			//遍历每个人说的话，判断其是否说谎 
			for(int k=1;k<=n;k++)
			{
			   
				//如果玩家k说的话小于0，则wj[k]为狼人，如果这个狼人不是i也不是j，则说明是谎话；
				//如果大于0，说明这个人是好人，如果wj[k]是 i或者j中的一个，说明是谎话 
				if((wj[k] < 0 && -wj[k] != i && -wj[k] !=j) || (wj[k] > 0 && (wj[k] == i || wj[k] == j)))
				{
					//k说谎了，如果k不是狼人，则好人说谎加1，否则狼人说谎+1 
					if(k != i && k != j)  pl++;
					else wl++; 
				}
			}
			if(pl == 1 && wl == 1)
			{
				w1 = i;
				w2 = j;
				break;
			} 
		}
		if(w1) break;
	}
	if(w1) printf("%d %d", w1, w2);
	else printf("No Solution");
} 
