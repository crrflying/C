#include<stdio.h>

int main()
{
	int i, m, n;
	i = 20;
	int *i_pointer;
	
	i_pointer = &i;   //ȡֵ����ָ�룬����ָ���ŵ��ǵ�ַ���� * ָ�����ֵ 
	
	m = i+6; //26
	i_pointer = &m;
	
	n = *i_pointer + 3;  //29
	
	printf("%d %d", *i_pointer, n);
}
