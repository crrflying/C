#include<stdio.h>

int main()
{
	int a=20, b=5;
	
	int *point = &a;   //&ȡ��ַ��*����ֵ��ȡ
	
	a += *point;
	printf("%d\n", a); 
	point = &b;
	
	*point = *point + a;
	
	printf("%d", *point); 
} 
