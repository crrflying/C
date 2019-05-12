#include<stdio.h>

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
}

int main()
{
	int a, b;
	int *pa, *pb;
	scanf("%d %d", &a, &b);
	printf("before swap, a = %d, b = %d", a, b);
	pa = &a;
	pb = &b;
	swap(pa, pb);
	printf("after swap, a = %d, b = %d", a, b);
}
