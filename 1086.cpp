#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, mul, cmul, count=0;
	scanf("%d %d", &a, &b);
	mul = a*b;
	cmul = mul;

	while(cmul)
	{
		count++;
		cmul/=10;
		
	}
	float x=0;
	while(count)
	{
		x += mul%10 * pow(10, count-1);
		//printf("%d",mul%10);
		mul/=10;
		count--;
	}
	printf("%.0f", x);
} 
