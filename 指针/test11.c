#include<stdio.h>
#define N 200

float f1(float x)
{
	return (1+x*x);
}

float f2(float x)
{
	return (1+x+x*x+x*x*x);
}

float f3(float x)
{
	return (x/(1+x*x));
}

float definite_integral(float (*f)(float), float a, float b) //函数指针做函数参数 
{
	
	float s; 
	//初始面积 
	s = ((*f)(a) + (*f)(b))/2.0;
	float h = (b-a)/N;
	int i;
	for(i=0;i<N;i++)
	{
		s += (*f)(a+i*h);
	}
	float y = s * h;
	return y; 
}

//计算定积分
void main()
{
	float y1, y2, y3;
	y1 = definite_integral(f1, 0.0, 1.0);
	y2 = definite_integral(f2, 0.0, 6.0);
	y3 = definite_integral(f3, 0., 3.7);
	printf("%.3f %.3f %.3f", y1, y2, y3);
} 
