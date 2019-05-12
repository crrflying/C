#include<stdio.h>
//指针数组
char *week[] = { "SUN","MON", "TUES", "WED", "THUR", "FRI", "SAT", NULL};
char *find(char *t[], int day)  //返回一个指针 
{
	int i;
	for(i=0;i<day&&t[i]!=NULL;i++);  //可以包含超过 7 的数字输入 
	if(i==day && t[i] != NULL)
	{
		return t[day];
	 } 
	 else
	 {
	 	return NULL;
	 }
}



#include<stdio.h>
int main()
{
	int day;
	scanf("%d", &day);
	char *p;
	p = find(week, day);
	
	printf("%s ", p);
	
} 
