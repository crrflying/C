/*
本题给定甲、乙、丙三个人的能力值关系为：甲的能力值确定是 2 位正整数；把甲的能力值的 2 个数字调换位置就是乙的能力值；
甲乙两人能力差是丙的能力值的 X 倍；乙的能力值是丙的 Y 倍。请你指出谁比你强应“从之”，谁比你弱应“改之”。
输入格式：
输入在一行中给出三个数，依次为：M（你自己的能力值）、X 和 Y。三个数字均为不超过 1000 的正整数。
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int jia, yi, bing, x, y, me, flag=1;
	float k[3];  //????????为什么必须为float，int错误 
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
