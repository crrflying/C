#include<stdio.h>

#define INPUT "%s %d %d %d"
#define OUTPUT "������%s���ɼ�1��%d���ɼ�2��%d���ɼ�3��%d\n"
#define N 2

struct studentScore
{
	char name[30];
	int score[3];
}stu[N];  //�ṹ�����飬�����е�Ԫ���ǽṹ��Ԫ����ɵ� 
void input(struct studentScore *p);
void output(struct studentScore *p);

int main()
{
	struct studentScore *p;
	for(p = stu; p<stu+N; p++)
	{
		input(p);
	}
	for(p = stu; p<stu+N; p++)
	{
		output(p);
	}
}

void input(struct studentScore *p)
{
	scanf(INPUT, &(*p).name, &(*p).score[0], &(*p).score[1],&(*p).score[2]);
}
void output(struct studentScore *p)
{
	printf(OUTPUT, (*p).name, (*p).score[0], (*p).score[1],(*p).score[2]);
} 
