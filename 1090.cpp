#include<stdio.h>
int main()
{
	//n�ǳɶԵĲ�������Ʒ������ m�Ǽ�װ���Ʒ�嵥�ĵ��� 
	int n,m;
	scanf("%d %d", &n, &m);
	
	/*n�У�ÿһ���ǲ����ݵ���Ʒ��
	�� 20001 20002
       20003 20004
       �������ֻ���ı�� ��5λ���� 
    */ 
    
    int unsafe[n][2];
    int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &unsafe[i][0], &unsafe[i][1]);
	} 
    
	/*m�� ÿһ��һ�������嵥 
	�� 4 00001 20004 00002 20003
	4������Ʒ����
	 ��������Ʒ��� 
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
	
	///////////����m���嵥���ж��Ƿ�ȫ����ȫ����Yes�� �������No ////////////// 
	
	
} 
