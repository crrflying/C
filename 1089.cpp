#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int wj[n];
	int w1,w2;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &wj[i]); //�������˵�Ļ� 
	}
	//��������������i��j 
	for(int i=1;i<=n;i++)
	{
		
		for(int j=i+1;j<=n;j++)
		{ 
		    int pl=0, wl=0;
			//����ÿ����˵�Ļ����ж����Ƿ�˵�� 
			for(int k=1;k<=n;k++)
			{
			   
				//������k˵�Ļ�С��0����wj[k]Ϊ���ˣ����������˲���iҲ����j����˵���ǻѻ���
				//�������0��˵��������Ǻ��ˣ����wj[k]�� i����j�е�һ����˵���ǻѻ� 
				if((wj[k] < 0 && -wj[k] != i && -wj[k] !=j) || (wj[k] > 0 && (wj[k] == i || wj[k] == j)))
				{
					//k˵���ˣ����k�������ˣ������˵�Ѽ�1����������˵��+1 
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
