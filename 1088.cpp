/*
��������ס��ҡ��������˵�����ֵ��ϵΪ���׵�����ֵȷ���� 2 λ���������Ѽ׵�����ֵ�� 2 �����ֵ���λ�þ����ҵ�����ֵ��
���������������Ǳ�������ֵ�� X �����ҵ�����ֵ�Ǳ��� Y ��������ָ��˭����ǿӦ����֮����˭������Ӧ����֮����
�����ʽ��
������һ���и���������������Ϊ��M�����Լ�������ֵ����X �� Y���������־�Ϊ������ 1000 ����������
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int jia, yi, bing, x, y, me, flag=1;
	float k[3];  //????????Ϊʲô����Ϊfloat��int���� 
	scanf("%d %d %d", &me, &x, &y);
	for(jia=10;jia<100;jia++)
	{
		yi = jia%10*10 + jia/10;
		float bing1 = abs(jia-yi)/(x*1.0);
		float bing2 = yi*1.0/y;
		if(bing1 == bing2)
		{
			k[0] = jia;
			k[1] = yi;
			k[2] = bing1;
			flag = 0;
		}
	}
	if(flag)
	{
		printf("No Solution");
		return 0;
	}
	else{
		printf("%.0f", k[0]);
		for(int i=0;i<3;i++)
		{
			if(k[i] == me)
			{
				printf(" Ping");
			}
			else if(k[i] > me)
			{
				printf(" Cong");
			}
			else{
				printf(" Gai");
			}
		}
	}

 } 
