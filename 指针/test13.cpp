#include<stdio.h>
//ָ������
char *week[] = { "SUN","MON", "TUES", "WED", "THUR", "FRI", "SAT", NULL};
char *find(char *t[], int day)  //����һ��ָ�� 
{
	int i;
	for(i=0;i<day&&t[i]!=NULL;i++);  //���԰������� 7 ���������� 
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
