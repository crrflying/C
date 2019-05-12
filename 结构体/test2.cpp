#include<stdio.h>

#define INPUT "%s %d %d %d"
#define OUTPUT "姓名：%s，成绩1：%d，成绩2：%d，成绩3：%d\n"
#define N 2

struct studentScore
{
	char name[30];
	int score[3];
}stu[N];  //结构体数组，数组中的元素是结构体元素组成的 
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
