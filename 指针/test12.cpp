//指针函数
//输出给定的某个学生的分数，m表示的是第几个学生 
#include<stdio.h>
#define M 4
//float (*point)[M]表示 行 ，n表示第 n行 
float *search(float (*point)[M], int n)
{
	float *pt;
	pt = *(point + n);  //使其变成指向列 
	return pt; 
}

int main()
{
	float score[][M] = {{80, 90, 80, 90}, {37, 90, 78, 90}, {80, 67, 80, 70}};
	float *p;
	int i, m;
	scanf("%d", &m);  //学生数 
	p = search(score, m-1);
	for(i = 0;i<M;i++)
	{
		printf("%.2f ", *(p+i));
	}
} 
