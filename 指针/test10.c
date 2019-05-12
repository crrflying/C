#include<stdio.h>

int max(int a, int b)
{
	return (a>b)?a:b;
} 

//指针函数 
int main()
{
	int (*p)(int, int);  //定义函数指针  (*p)是一个整体 
	int a, b;
	scanf("%d %d", &a, &b);
	p = max;
	int c = (*p) (a,b);
	printf("%d",c);
}
