//指针访问二维数组 
#include<stdio.h>

int main()
{
	
	int num[2][3] = {1,2,3,4,5,6};
	/*
	int *p = *num;  //指向列 , 其他方式 num[0], &num[0][0], *(num+0)
	int i; 
	for(i=0;i<6;i++)
	{
		if((p - *num) % 3 == 0)
		{
			printf("\n");
		}
		printf("%-5d", *(p++));  //靠左输出 
	}
	*/ 
	int (*p)[3];   //指向数组变量的指针
	p = num;  //指向数组行
	int i, j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%-5d", *(*(p+i)+j));  //输出num[i][j] 
		}
		printf("\n");
	 } 
}


