#include<stdio.h>
#include<string.h>
#define M 80

int main()
{
	char from[M], to[M];
	char *p;
	gets(from);
	p = from;
	int len=0;
	while(*p++)
	{
		len++;
	}
	printf("%d\n", len);
	
	char *q;
	p = from, q = to;
	while(*q++ = *p++);   //空语句循环体复制字符串 
	printf("%s\n", to);
	
	p = from, q = to;
	while(*q++);
	*q--;  //去掉\0 
	
	while(*q++ = *p++);   //复制第二次
	 printf("%s\n", to);
}
