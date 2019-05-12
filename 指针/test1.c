#include<stdio.h>

int main()
{
	int i, m, n;
	i = 20;
	int *i_pointer;
	
	i_pointer = &i;   //取值赋给指针，所以指针存放的是地址，加 * 指向的是值 
	
	m = i+6; //26
	i_pointer = &m;
	
	n = *i_pointer + 3;  //29
	
	printf("%d %d", *i_pointer, n);
}
