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
	while(*q++ = *p++);   //�����ѭ���帴���ַ��� 
	printf("%s\n", to);
	
	p = from, q = to;
	while(*q++);
	*q--;  //ȥ��\0 
	
	while(*q++ = *p++);   //���Ƶڶ���
	 printf("%s\n", to);
}
