#include<stdio.h>
#include "2.c"
#include "3.c"
#include "4.c"

int main()
{
	//����һ���ַ���
	char str[80];
	char del;
	input_str(str);
	printf("�����ַ���Ϊ��");
	output_str(str);
	//ɾ��һ���ַ�
	printf("����ɾ�����ַ���");
	scanf("%c", &del);
	delete_char(str, del);
	//���ɾ������ַ��� 
	printf("ɾ���ַ�%c����ַ���Ϊ��");
	output_str(str);
} 
