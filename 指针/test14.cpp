//定义指针数组指向不同的字符串，利用选择排序进行排序

#include<stdio.h>
#include<string.h>

void select_sort(char *str[], int n);

int main()
{
	/*
	char str[] = "Churongrong";
	select_sort(str);
	printf("%s", str);
	*/
	char *name[] = {"mona", "john", "bob","lily"};
	select_sort(name, 4);
	int i;
	for(i=0;i<4;i++)
	{
		printf("%s ", name[i]);
	}
	
} 
 
void select_sort(char *str[], int n)
{
	int min, i, j;
	char *temp;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j = i+1;j<n;j++)
		{
			if(strcmp(str[j], str[min]) < 0)
				min = j;
		}
		if(min != i)
		{
			temp = str[i];
			str[i] = str[min];
			str[min] = temp;
		}
		
	}
}
