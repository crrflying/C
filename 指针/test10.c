#include<stdio.h>

int max(int a, int b)
{
	return (a>b)?a:b;
} 

//ָ�뺯�� 
int main()
{
	int (*p)(int, int);  //���庯��ָ��  (*p)��һ������ 
	int a, b;
	scanf("%d %d", &a, &b);
	p = max;
	int c = (*p) (a,b);
	printf("%d",c);
}
