#include<stdio.h>
#define N 5000
#include<string.h>
#include<math.h>

/*
//将字符串改为数字进行计算时无法确定最终结果的精度，如果要求精度的话，还是按照字符串进行处理 

int main()
{
	char snum[N];
	scanf("%s", &snum);
	if(snum[0] == '-')
	{
		printf("-");
	}
	float num=0;
	num += snum[1] - '0';
	int i;
	for(i=3;snum[i] != 'E';i++)
	{
		num += float(snum[i] - '0') / pow(10, i-2);
	}
	i++;
	float zhishu;
	if(snum[i] == '-')
	{
		zhishu=0;
		for(int j=i+1;j<strlen(snum);j++)
		{
			zhishu += (snum[j] - '0') * pow(10, strlen(snum)-j-1);
		}
		num /= pow(10, zhishu);
	}
	else if(snum[i] == '+')
	{
		zhishu=0;
		for(int j=i+1;j<strlen(snum);j++)
		{
			zhishu += (snum[j] - '0') * pow(10, strlen(snum)-j-1);
		}
		num *= pow(10, zhishu);
	}
	printf("%.8f", num);

}
*/

int main()
{
	char snum[N];
	scanf("%s", snum);
	if(snum[0] == '-')
	{
		printf("-");
	}
	int len = strlen(snum);

	int index_E=0;
	while(snum[index_E] != 'E')
	{
		index_E++;
	}
	index_E++;
	//printf("%c", snum[index_E]);
	//指数
	int zhishu=0;
	for(int j=index_E+1;j<len;j++)
	{
		zhishu = zhishu * 10 + (snum[j] - '0');
	} 
	//printf(" %d ",zhishu);
	if(zhishu == 0)
	{
		for(int j=1;j<index_E-1;j++)
		{
			printf("%c", snum[j]);
		}
	}
	if(snum[index_E] == '-')
	{
		printf("0.");
		while(zhishu>1)
		{
			printf("0");
			zhishu--;
		}
		printf("%c", snum[1]);
		for(int j=3;j<index_E-1;j++)
		{
			printf("%c", snum[j]);
		}
	}
	else{
		for(int j=1;j<index_E-1;j++)
		{
			if(snum[j] == '.') continue;
			printf("%c", snum[j]);
			if(j == zhishu+2 && index_E-4!=zhishu)
			{
				printf(".");
			}
		}
		for(int j=0;j<zhishu-(index_E-4);j++)
		{
			printf("0");
		}
		/*
		int k=3;
		printf("%c", snum[1]);
		while(zhishu>0)
		{
			if(snum[k] == 'E')
			{
				break;
			}
			printf("%c", snum[k]);
			k++;
			zhishu--;
		}
		while(zhishu>0)
		{
			printf("0");
			zhishu--;
		}*/
	}
} 
