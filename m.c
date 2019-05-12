#include<stdio.h>
#include "2.c"
#include "3.c"
#include "4.c"

int main()
{
	//输入一个字符串
	char str[80];
	char del;
	input_str(str);
	printf("输入字符串为：");
	output_str(str);
	//删除一个字符
	printf("输入删除的字符：");
	scanf("%c", &del);
	delete_char(str, del);
	//输出删除后的字符串 
	printf("删除字符%c后的字符串为：");
	output_str(str);
} 
